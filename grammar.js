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
    /\s+/,
    token(seq('\n+', /\s*/)),
    /;.*/,
  ],

  rules: {
    source_file: $ => seq(
      $.title_line,
      repeat(choice(
        $.instance_line,
        $.control_line
      ))
    ),

    title_line: $ => seq(
      $.line_content,
      $.newline
    ),

    // Instance lines
    instance_line: $ => seq(
      choice(
        $._resistor_instance,
        $._capacitor_instance,
        $._inductor_instance,
        $._transistor_instance,
        $._voltage_source_instance,
      ),
      $.newline
    ),

    _resistor_instance: $ =>
      seq(field('device_type', $.r), field('device_name', $.part_number), $.node, $.node, $.value),
    _capacitor_instance: $ =>
      seq(field('device_type', $.c), field('device_name', $.part_number), $.node, $.node, $.value),
    _inductor_instance: $ =>
      seq(field('device_type', $.l), field('device_name', $.part_number), $.node, $.node, $.value),
    _transistor_instance: $ =>
      seq(field('device_type', $.q), field('device_name', $.part_number), $.node, $.node, $.node, $.identifier),

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
      choice('.model', '.tran', '.end'),
      repeat(choice(
        $.value,
        $.identifier,
        seq('(', repeat($.assignment), ')')
      )),
    ),

    assignment: $ => seq(
      $.identifier,
      '=',
      $.value
    ),

    // Tokens
    part_number: $ => token.immediate(/[0-9a-zA-Z]*/),
    identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,
    node: $ => /[a-zA-Z0-9]+/,
    value: $ => /[0-9.]+(e|E-?\d+)?[a-zA-Z]*/,

    line_content: $ => /.*/,
    newline: $ => /\r?\n/,

    r: $ => /r|R/,
    c: $ => /c|C/,
    l: $ => /l|L/,
    q: $ => /q|Q/,
    v: $ => /v|V/,

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
