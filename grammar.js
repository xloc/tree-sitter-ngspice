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
        $.resistor_instance,
        $.capacitor_instance,
        $.inductor_instance,
        $.transistor_instance,
        $.voltage_source_instance,
      ),
      $.newline
    ),

    resistor_instance: $ =>
      seq(device_name(/r|R/), $.node, $.node, $.value),
    capacitor_instance: $ =>
      seq(device_name(/c|C/), $.node, $.node, $.value),
    inductor_instance: $ =>
      seq(device_name(/l|L/), $.node, $.node, $.value),
    transistor_instance: $ =>
      seq(device_name(/q|Q/), $.node, $.node, $.node, $.identifier),

    voltage_source_instance: $ => seq(
      device_name(/v|V/), $.node, $.node,
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
    identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,
    node: $ => /[a-zA-Z0-9]+/,
    value: $ => /[0-9.]+(e|E-?\d+)?[a-zA-Z]*/,

    line_content: $ => /.*/,
    newline: $ => /\r?\n/,
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
