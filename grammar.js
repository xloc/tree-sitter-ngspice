/**
 * @file tree-sitter grammar for ngspice, a circuit simulation language for defining electronic components and simulation commands.
 * @author xloc <xloc.cc@outlook.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check


module.exports = grammar({
  name: 'ngspice',

  extras: $ => [
    /\s+/, // whitespace
    token(seq('\n+', /\s*/)), // line continuation
    $.dolar_comment,
    $.semicolon_comment,
    $.line_comment,
  ],

  rules: {
    // file must end with a newline
    source_file: $ => seq(
      seq($.title_line, '\n'),
      repeat(choice($.body_line, '\n'))
    ),

    title_line: $ => /[^\n]+/,

    // Instance lines
    body_line: $ =>
      choice(
        $.control_line,
        $._resistor_instance,
        $._capacitor_instance,
        $._inductor_instance,
        $._transistor_instance,
        $._voltage_source_instance,
        $._mosfet_instance,
      ),

    _resistor_instance: $ =>
      seq(field('device_type', $.r), field('device_name', $.part_number), $.node, $.node, $.value),
    _capacitor_instance: $ =>
      seq(field('device_type', $.c), field('device_name', $.part_number), $.node, $.node, $.value),
    _inductor_instance: $ =>
      seq(field('device_type', $.l), field('device_name', $.part_number), $.node, $.node, $.value),
    _transistor_instance: $ =>
      seq(field('device_type', $.q), field('device_name', $.part_number), $.node, $.node, $.node, $.identifier),
    _mosfet_instance: $ =>
      seq(field('device_type', $.m), field('device_name', $.part_number), $.node, $.node, $.node, $.node, $.identifier, repeat($.assignment)),

    _voltage_source_instance: $ => seq(
      field('device_type', $.v), field('device_name', $.part_number), $.node, $.node,
      optional($.dc), optional($.ac), optional($.time_dependent_value)),
    dc: $ => seq(optional(/dc|DC/), $.value),
    ac: $ => seq(/ac|AC/, $.value),
    time_dependent_value: $ => choice(
      seq(/sin|SIN/, '(', $.value, $.value, $.value, ')'),
    ),

    // Control lines
    control_line: $ => seq(
      choice('.model', '.tran', '.end', '.include'),
      repeat(choice(
        $.value,
        $.dotted_identifier,
        seq('(', repeat($.assignment), ')')
      )),
    ),

    assignment: $ => seq($.identifier, '=', $.value),

    // Tokens
    part_number: $ => token.immediate(/[0-9a-zA-Z]*/),
    identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,
    dotted_identifier: $ => /[a-zA-Z][a-zA-Z0-9.]*/,
    node: $ => /[a-zA-Z0-9]+/,
    value: $ => /[0-9.]+(e|E-?\d+)?[a-zA-Z]*/,

    line_content: $ => /.*/,
    newline: $ => /\r?\n/,

    r: $ => /r|R/,
    c: $ => /c|C/,
    l: $ => /l|L/,
    q: $ => /q|Q/,
    v: $ => /v|V/,
    m: $ => /m|M/,
    dolar_comment: $ => seq('$', /[^\n]*/),
    semicolon_comment: $ => seq(';', /[^\n]*/),
    line_comment: $ => seq('*', /[^\n]*/),
  }
});


function device_name(type) {
  return seq(type, token.immediate(/[0-9a-zA-Z]*/));
}

function ignore_case(string) {
  return new RegExp(string
    .split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
  );
}
