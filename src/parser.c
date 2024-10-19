#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_resistor_instance_token1 = 1,
  aux_sym_resistor_instance_token2 = 2,
  aux_sym_capacitor_instance_token1 = 3,
  aux_sym_inductor_instance_token1 = 4,
  aux_sym_transistor_instance_token1 = 5,
  aux_sym_voltage_source_instance_token1 = 6,
  aux_sym_dc_token1 = 7,
  aux_sym_ac_token1 = 8,
  aux_sym_time_dependent_value_token1 = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DOTmodel = 12,
  anon_sym_DOTtran = 13,
  anon_sym_DOTend = 14,
  anon_sym_EQ = 15,
  sym_identifier = 16,
  sym_node = 17,
  sym_value = 18,
  sym_line_content = 19,
  sym_newline = 20,
  sym_source_file = 21,
  sym_title_line = 22,
  sym_instance_line = 23,
  sym_resistor_instance = 24,
  sym_capacitor_instance = 25,
  sym_inductor_instance = 26,
  sym_transistor_instance = 27,
  sym_voltage_source_instance = 28,
  sym_dc = 29,
  sym_ac = 30,
  sym_time_dependent_value = 31,
  sym_control_line = 32,
  sym_assignment = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_control_line_repeat1 = 35,
  aux_sym_control_line_repeat2 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_resistor_instance_token1] = "resistor_instance_token1",
  [aux_sym_resistor_instance_token2] = "resistor_instance_token2",
  [aux_sym_capacitor_instance_token1] = "capacitor_instance_token1",
  [aux_sym_inductor_instance_token1] = "inductor_instance_token1",
  [aux_sym_transistor_instance_token1] = "transistor_instance_token1",
  [aux_sym_voltage_source_instance_token1] = "voltage_source_instance_token1",
  [aux_sym_dc_token1] = "dc_token1",
  [aux_sym_ac_token1] = "ac_token1",
  [aux_sym_time_dependent_value_token1] = "time_dependent_value_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOTmodel] = ".model",
  [anon_sym_DOTtran] = ".tran",
  [anon_sym_DOTend] = ".end",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_node] = "node",
  [sym_value] = "value",
  [sym_line_content] = "line_content",
  [sym_newline] = "newline",
  [sym_source_file] = "source_file",
  [sym_title_line] = "title_line",
  [sym_instance_line] = "instance_line",
  [sym_resistor_instance] = "resistor_instance",
  [sym_capacitor_instance] = "capacitor_instance",
  [sym_inductor_instance] = "inductor_instance",
  [sym_transistor_instance] = "transistor_instance",
  [sym_voltage_source_instance] = "voltage_source_instance",
  [sym_dc] = "dc",
  [sym_ac] = "ac",
  [sym_time_dependent_value] = "time_dependent_value",
  [sym_control_line] = "control_line",
  [sym_assignment] = "assignment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_control_line_repeat1] = "control_line_repeat1",
  [aux_sym_control_line_repeat2] = "control_line_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_resistor_instance_token1] = aux_sym_resistor_instance_token1,
  [aux_sym_resistor_instance_token2] = aux_sym_resistor_instance_token2,
  [aux_sym_capacitor_instance_token1] = aux_sym_capacitor_instance_token1,
  [aux_sym_inductor_instance_token1] = aux_sym_inductor_instance_token1,
  [aux_sym_transistor_instance_token1] = aux_sym_transistor_instance_token1,
  [aux_sym_voltage_source_instance_token1] = aux_sym_voltage_source_instance_token1,
  [aux_sym_dc_token1] = aux_sym_dc_token1,
  [aux_sym_ac_token1] = aux_sym_ac_token1,
  [aux_sym_time_dependent_value_token1] = aux_sym_time_dependent_value_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOTmodel] = anon_sym_DOTmodel,
  [anon_sym_DOTtran] = anon_sym_DOTtran,
  [anon_sym_DOTend] = anon_sym_DOTend,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_node] = sym_node,
  [sym_value] = sym_value,
  [sym_line_content] = sym_line_content,
  [sym_newline] = sym_newline,
  [sym_source_file] = sym_source_file,
  [sym_title_line] = sym_title_line,
  [sym_instance_line] = sym_instance_line,
  [sym_resistor_instance] = sym_resistor_instance,
  [sym_capacitor_instance] = sym_capacitor_instance,
  [sym_inductor_instance] = sym_inductor_instance,
  [sym_transistor_instance] = sym_transistor_instance,
  [sym_voltage_source_instance] = sym_voltage_source_instance,
  [sym_dc] = sym_dc,
  [sym_ac] = sym_ac,
  [sym_time_dependent_value] = sym_time_dependent_value,
  [sym_control_line] = sym_control_line,
  [sym_assignment] = sym_assignment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_control_line_repeat1] = aux_sym_control_line_repeat1,
  [aux_sym_control_line_repeat2] = aux_sym_control_line_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_resistor_instance_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resistor_instance_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_capacitor_instance_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inductor_instance_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transistor_instance_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_voltage_source_instance_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dc_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ac_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_time_dependent_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTmodel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTtran] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_line_content] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_title_line] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_line] = {
    .visible = true,
    .named = true,
  },
  [sym_resistor_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_capacitor_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_inductor_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_transistor_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_voltage_source_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_dc] = {
    .visible = true,
    .named = true,
  },
  [sym_ac] = {
    .visible = true,
    .named = true,
  },
  [sym_time_dependent_value] = {
    .visible = true,
    .named = true,
  },
  [sym_control_line] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_control_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_control_line_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_line_content);
      if (eof) ADVANCE(90);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 267,
        '(', 145,
        ')', 150,
        '.', 238,
        ';', 268,
        '=', 172,
        'A', 201,
        'D', 202,
        'S', 203,
        'a', 205,
        'd', 206,
        's', 207,
        'C', 105,
        'c', 105,
        'L', 111,
        'l', 111,
        'Q', 117,
        'q', 117,
        'R', 98,
        'r', 98,
        'V', 123,
        'v', 123,
        '\t', 267,
        0x0b, 267,
        '\f', 267,
        ' ', 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '+') SKIP(2);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '(') ADVANCE(141);
      if (lookahead == '+') SKIP(14);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == ';') SKIP(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '(') ADVANCE(141);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == ';') SKIP(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ';') SKIP(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(115);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0) SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 's') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'C') ADVANCE(130);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'C') ADVANCE(126);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(21);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '+') SKIP(28);
      if (lookahead == ';') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == ';') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == ';') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '+') SKIP(31);
      if (lookahead == ';') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == ';') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == ';') SKIP(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0) SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '+') SKIP(34);
      if (lookahead == ';') SKIP(35);
      if (lookahead == '=') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == ';') SKIP(35);
      if (lookahead == '=') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == ';') SKIP(35);
      if (lookahead == '=') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead != 0) SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == '+') SKIP(38);
      if (lookahead == ';') SKIP(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == ';') SKIP(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead != 0) SKIP(39);
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == ';') SKIP(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == ';') SKIP(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (lookahead != 0) SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(40);
      if (lookahead == '+') SKIP(41);
      if (lookahead == ';') SKIP(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(40);
      if (lookahead == ';') SKIP(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(40);
      if (lookahead == ';') SKIP(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '(') ADVANCE(141);
      if (lookahead == '+') SKIP(44);
      if (lookahead == ';') SKIP(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '(') ADVANCE(141);
      if (lookahead == ';') SKIP(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ';') SKIP(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (lookahead != 0) SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '+') SKIP(47);
      if (lookahead == ';') SKIP(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == ';') SKIP(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == ';') SKIP(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 's') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == ';') SKIP(62);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == 's') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ';') SKIP(62);
      if (lookahead == 'I') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(62);
      if (lookahead != 0) SKIP(62);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ';') SKIP(62);
      if (lookahead == 'N') ADVANCE(139);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(62);
      if (lookahead != 0) SKIP(62);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ';') SKIP(62);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 's') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(62);
      if (lookahead != 0) SKIP(62);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ';') SKIP(62);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 's') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(62);
      if (lookahead != 0) SKIP(62);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ';') SKIP(62);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(62);
      if (lookahead != 0) SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == ';') SKIP(64);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(63);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ';') SKIP(64);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(64);
      if (lookahead != 0) SKIP(64);
      END_STATE();
    case 65:
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 66:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(134);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 84:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '+') SKIP(85);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ';') SKIP(86);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85);
      END_STATE();
    case 85:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ';') SKIP(86);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85);
      END_STATE();
    case 86:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(86);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(116);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86);
      if (lookahead != 0) SKIP(86);
      END_STATE();
    case 87:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '(') ADVANCE(141);
      if (lookahead == '+') SKIP(88);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == ';') SKIP(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 88:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '(') ADVANCE(141);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == ';') SKIP(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ';') SKIP(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(115);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0) SKIP(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_resistor_instance_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_resistor_instance_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_resistor_instance_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 175,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_resistor_instance_token1);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'a', 197,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_resistor_instance_token1);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_resistor_instance_token1);
      ADVANCE_MAP(
        '.', 7,
        'a', 10,
        'C', 104,
        'c', 104,
        'L', 110,
        'l', 110,
        'Q', 116,
        'q', 116,
        'R', 97,
        'r', 97,
        'V', 122,
        'v', 122,
      );
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_resistor_instance_token1);
      ADVANCE_MAP(
        '.', 7,
        'C', 104,
        'c', 104,
        'L', 110,
        'l', 110,
        'Q', 116,
        'q', 116,
        'R', 97,
        'r', 97,
        'V', 122,
        'v', 122,
      );
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_resistor_instance_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_resistor_instance_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_resistor_instance_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_capacitor_instance_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_capacitor_instance_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_capacitor_instance_token1);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_capacitor_instance_token1);
      ADVANCE_MAP(
        '.', 7,
        'C', 104,
        'c', 104,
        'L', 110,
        'l', 110,
        'Q', 116,
        'q', 116,
        'R', 97,
        'r', 97,
        'V', 122,
        'v', 122,
      );
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_capacitor_instance_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_capacitor_instance_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_inductor_instance_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_inductor_instance_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_inductor_instance_token1);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_inductor_instance_token1);
      ADVANCE_MAP(
        '.', 7,
        'C', 104,
        'c', 104,
        'L', 110,
        'l', 110,
        'Q', 116,
        'q', 116,
        'R', 97,
        'r', 97,
        'V', 122,
        'v', 122,
      );
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_inductor_instance_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_inductor_instance_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_transistor_instance_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_transistor_instance_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_transistor_instance_token1);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_transistor_instance_token1);
      ADVANCE_MAP(
        '.', 7,
        'C', 104,
        'c', 104,
        'L', 110,
        'l', 110,
        'Q', 116,
        'q', 116,
        'R', 97,
        'r', 97,
        'V', 122,
        'v', 122,
      );
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_transistor_instance_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_transistor_instance_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_voltage_source_instance_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_voltage_source_instance_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_voltage_source_instance_token1);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_voltage_source_instance_token1);
      ADVANCE_MAP(
        '.', 7,
        'C', 104,
        'c', 104,
        'L', 110,
        'l', 110,
        'Q', 116,
        'q', 116,
        'R', 97,
        'r', 97,
        'V', 122,
        'v', 122,
      );
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_voltage_source_instance_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_voltage_source_instance_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_dc_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_dc_token1);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 18,
        'D', 19,
        'S', 20,
        'a', 22,
        'd', 23,
        's', 24,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_dc_token1);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'S', 225,
        'a', 227,
        'd', 228,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_dc_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 18,
        'D', 19,
        'S', 20,
        'a', 22,
        'd', 23,
        's', 24,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'S', 225,
        'a', 227,
        'd', 228,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 18,
        'D', 19,
        'S', 20,
        'a', 22,
        'd', 23,
        's', 24,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'S', 225,
        'a', 227,
        'd', 228,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      ADVANCE_MAP(
        '.', 7,
        'C', 104,
        'c', 104,
        'L', 110,
        'l', 110,
        'Q', 116,
        'q', 116,
        'R', 97,
        'r', 97,
        'V', 122,
        'v', 122,
      );
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      ADVANCE_MAP(
        '.', 7,
        'C', 104,
        'c', 104,
        'L', 110,
        'l', 110,
        'Q', 116,
        'q', 116,
        'R', 97,
        'r', 97,
        'V', 122,
        'v', 122,
      );
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTend);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTend);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'C', 102,
        'D', 176,
        'S', 178,
        'a', 176,
        'c', 102,
        'd', 176,
        's', 182,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTend);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTend);
      ADVANCE_MAP(
        '.', 7,
        'C', 104,
        'c', 104,
        'L', 110,
        'l', 110,
        'Q', 116,
        'q', 116,
        'R', 97,
        'r', 97,
        'V', 122,
        'v', 122,
      );
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTend);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOTend);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_EQ);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '-', 268,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'C', 102,
        'D', 176,
        'S', 178,
        'a', 176,
        'c', 102,
        'd', 176,
        'e', 179,
        's', 182,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'C', 102,
        'D', 176,
        'S', 178,
        'a', 176,
        'c', 102,
        'd', 176,
        'n', 158,
        's', 182,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'C', 102,
        'D', 176,
        'S', 178,
        'a', 176,
        'c', 102,
        'd', 176,
        's', 182,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'E', 173,
        'S', 178,
        'a', 176,
        'd', 176,
        'e', 186,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'I', 180,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'L', 108,
        'S', 178,
        'a', 176,
        'd', 176,
        'l', 152,
        's', 182,
        'C', 102,
        'c', 102,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'N', 135,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'R', 92,
        'S', 178,
        'a', 176,
        'd', 176,
        'r', 93,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        'i', 183,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        'n', 135,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        'n', 187,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        'o', 188,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 164,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 174,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '-', 15,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'E', 189,
        'e', 199,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'L', 109,
        'l', 153,
        'C', 103,
        'c', 103,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'R', 95,
        'r', 94,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'd', 165,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'd', 195,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'e', 191,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'n', 193,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'n', 159,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'o', 194,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ')') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_node);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'E', 173,
        'S', 178,
        'a', 176,
        'd', 176,
        'e', 186,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_node);
      if (lookahead == '-') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_node);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_node);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_node);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_node);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_node);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'E', 173,
        'S', 178,
        'a', 176,
        'd', 176,
        'e', 184,
        'm', 185,
        's', 182,
        't', 181,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        '-', 17,
        '.', 224,
        'A', 222,
        'D', 223,
        'S', 225,
        'a', 227,
        'd', 228,
        's', 229,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        '.', 224,
        'A', 222,
        'D', 223,
        'E', 220,
        'S', 225,
        'a', 227,
        'd', 228,
        'e', 231,
        's', 229,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'C', 131,
        'D', 223,
        'S', 225,
        'a', 227,
        'd', 228,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'C', 127,
        'D', 223,
        'S', 225,
        'a', 227,
        'd', 228,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'E', 220,
        'S', 225,
        'a', 227,
        'd', 228,
        'e', 231,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'I', 226,
        'S', 225,
        'a', 227,
        'd', 228,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'N', 137,
        'S', 225,
        'a', 227,
        'd', 228,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'S', 225,
        'a', 227,
        'c', 131,
        'd', 228,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'S', 225,
        'a', 227,
        'c', 127,
        'd', 228,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'S', 225,
        'a', 227,
        'd', 228,
        'i', 230,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'S', 225,
        'a', 227,
        'd', 228,
        'n', 137,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 273,
        '\r', 26,
        'A', 222,
        'D', 223,
        'S', 225,
        'a', 227,
        'd', 228,
        's', 229,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'E', 189,
        'e', 199,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '(', 143,
        '.', 233,
        'E', 189,
        'e', 196,
        'm', 198,
        't', 192,
        'C', 103,
        'c', 103,
        'L', 109,
        'l', 109,
        'Q', 115,
        'q', 115,
        'R', 95,
        'r', 95,
        'V', 121,
        'v', 121,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == 'E') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(257);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'l') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'l') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_value);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_value);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_line_content);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 267,
        '(', 145,
        ')', 150,
        '+', 267,
        '.', 238,
        ';', 268,
        '=', 172,
        'A', 201,
        'D', 202,
        'S', 203,
        'a', 205,
        'd', 206,
        's', 207,
        'C', 105,
        'c', 105,
        'L', 111,
        'l', 111,
        'Q', 117,
        'q', 117,
        'R', 98,
        'r', 98,
        'V', 123,
        'v', 123,
        '\t', 267,
        0x0b, 267,
        '\f', 267,
        ' ', 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_line_content);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 267,
        '(', 145,
        ')', 150,
        '.', 238,
        ';', 268,
        '=', 172,
        'A', 201,
        'D', 202,
        'S', 203,
        'a', 205,
        'd', 206,
        's', 207,
        'C', 105,
        'c', 105,
        'L', 111,
        'l', 111,
        'Q', 117,
        'q', 117,
        'R', 98,
        'r', 98,
        'V', 123,
        'v', 123,
        '\t', 267,
        0x0b, 267,
        '\f', 267,
        ' ', 267,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_line_content);
      ADVANCE_MAP(
        '\n', 266,
        '\r', 268,
        '(', 142,
        ')', 147,
        '.', 219,
        ';', 268,
        '=', 170,
        'A', 176,
        'D', 176,
        'S', 178,
        'a', 176,
        'd', 176,
        's', 182,
        'C', 102,
        'c', 102,
        'L', 108,
        'l', 108,
        'Q', 114,
        'q', 114,
        'R', 92,
        'r', 92,
        'V', 120,
        'v', 120,
        '\t', 268,
        0x0b, 268,
        '\f', 268,
        ' ', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_line_content);
      if (lookahead == ';') ADVANCE(270);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_line_content);
      if (lookahead == ';') ADVANCE(270);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_line_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_line_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(49);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == '\r') ADVANCE(57);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\r') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 269},
  [2] = {.lex_state = 85},
  [3] = {.lex_state = 85},
  [4] = {.lex_state = 85},
  [5] = {.lex_state = 88},
  [6] = {.lex_state = 88},
  [7] = {.lex_state = 88},
  [8] = {.lex_state = 88},
  [9] = {.lex_state = 88},
  [10] = {.lex_state = 85},
  [11] = {.lex_state = 85},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 57},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 63},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 63},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 38},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 63},
  [41] = {.lex_state = 63},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 41},
  [44] = {.lex_state = 38},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 44},
  [47] = {.lex_state = 63},
  [48] = {.lex_state = 100},
  [49] = {.lex_state = 100},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 100},
  [52] = {.lex_state = 63},
  [53] = {.lex_state = 100},
  [54] = {.lex_state = 100},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 63},
  [58] = {.lex_state = 38},
  [59] = {.lex_state = 63},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 63},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_resistor_instance_token1] = ACTIONS(1),
    [aux_sym_capacitor_instance_token1] = ACTIONS(1),
    [aux_sym_inductor_instance_token1] = ACTIONS(1),
    [aux_sym_transistor_instance_token1] = ACTIONS(1),
    [aux_sym_voltage_source_instance_token1] = ACTIONS(1),
    [aux_sym_dc_token1] = ACTIONS(1),
    [aux_sym_ac_token1] = ACTIONS(1),
    [aux_sym_time_dependent_value_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOTmodel] = ACTIONS(1),
    [anon_sym_DOTtran] = ACTIONS(1),
    [anon_sym_DOTend] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_node] = ACTIONS(1),
    [sym_value] = ACTIONS(1),
    [sym_line_content] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym_title_line] = STATE(3),
    [sym_line_content] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      aux_sym_resistor_instance_token1,
    ACTIONS(10), 1,
      aux_sym_capacitor_instance_token1,
    ACTIONS(13), 1,
      aux_sym_inductor_instance_token1,
    ACTIONS(16), 1,
      aux_sym_transistor_instance_token1,
    ACTIONS(19), 1,
      aux_sym_voltage_source_instance_token1,
    ACTIONS(22), 3,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
    STATE(2), 3,
      sym_instance_line,
      sym_control_line,
      aux_sym_source_file_repeat1,
    STATE(47), 5,
      sym_resistor_instance,
      sym_capacitor_instance,
      sym_inductor_instance,
      sym_transistor_instance,
      sym_voltage_source_instance,
  [36] = 9,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_resistor_instance_token1,
    ACTIONS(29), 1,
      aux_sym_capacitor_instance_token1,
    ACTIONS(31), 1,
      aux_sym_inductor_instance_token1,
    ACTIONS(33), 1,
      aux_sym_transistor_instance_token1,
    ACTIONS(35), 1,
      aux_sym_voltage_source_instance_token1,
    ACTIONS(37), 3,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
    STATE(4), 3,
      sym_instance_line,
      sym_control_line,
      aux_sym_source_file_repeat1,
    STATE(47), 5,
      sym_resistor_instance,
      sym_capacitor_instance,
      sym_inductor_instance,
      sym_transistor_instance,
      sym_voltage_source_instance,
  [72] = 9,
    ACTIONS(27), 1,
      aux_sym_resistor_instance_token1,
    ACTIONS(29), 1,
      aux_sym_capacitor_instance_token1,
    ACTIONS(31), 1,
      aux_sym_inductor_instance_token1,
    ACTIONS(33), 1,
      aux_sym_transistor_instance_token1,
    ACTIONS(35), 1,
      aux_sym_voltage_source_instance_token1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 3,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
    STATE(2), 3,
      sym_instance_line,
      sym_control_line,
      aux_sym_source_file_repeat1,
    STATE(47), 5,
      sym_resistor_instance,
      sym_capacitor_instance,
      sym_inductor_instance,
      sym_transistor_instance,
      sym_voltage_source_instance,
  [108] = 5,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym_control_line_repeat2,
    ACTIONS(47), 2,
      sym_identifier,
      sym_value,
    ACTIONS(43), 8,
      aux_sym_resistor_instance_token1,
      aux_sym_capacitor_instance_token1,
      aux_sym_inductor_instance_token1,
      aux_sym_transistor_instance_token1,
      aux_sym_voltage_source_instance_token1,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
  [132] = 5,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_control_line_repeat2,
    ACTIONS(53), 2,
      sym_identifier,
      sym_value,
    ACTIONS(51), 8,
      aux_sym_resistor_instance_token1,
      aux_sym_capacitor_instance_token1,
      aux_sym_inductor_instance_token1,
      aux_sym_transistor_instance_token1,
      aux_sym_voltage_source_instance_token1,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
  [156] = 5,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym_control_line_repeat2,
    ACTIONS(62), 2,
      sym_identifier,
      sym_value,
    ACTIONS(57), 8,
      aux_sym_resistor_instance_token1,
      aux_sym_capacitor_instance_token1,
      aux_sym_inductor_instance_token1,
      aux_sym_transistor_instance_token1,
      aux_sym_voltage_source_instance_token1,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
  [180] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 11,
      aux_sym_resistor_instance_token1,
      aux_sym_capacitor_instance_token1,
      aux_sym_inductor_instance_token1,
      aux_sym_transistor_instance_token1,
      aux_sym_voltage_source_instance_token1,
      anon_sym_LPAREN,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_identifier,
      sym_value,
  [197] = 2,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 11,
      aux_sym_resistor_instance_token1,
      aux_sym_capacitor_instance_token1,
      aux_sym_inductor_instance_token1,
      aux_sym_transistor_instance_token1,
      aux_sym_voltage_source_instance_token1,
      anon_sym_LPAREN,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_identifier,
      sym_value,
  [214] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 8,
      aux_sym_resistor_instance_token1,
      aux_sym_capacitor_instance_token1,
      aux_sym_inductor_instance_token1,
      aux_sym_transistor_instance_token1,
      aux_sym_voltage_source_instance_token1,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
  [228] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 8,
      aux_sym_resistor_instance_token1,
      aux_sym_capacitor_instance_token1,
      aux_sym_inductor_instance_token1,
      aux_sym_transistor_instance_token1,
      aux_sym_voltage_source_instance_token1,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
  [242] = 8,
    ACTIONS(77), 1,
      aux_sym_dc_token1,
    ACTIONS(79), 1,
      aux_sym_ac_token1,
    ACTIONS(81), 1,
      aux_sym_time_dependent_value_token1,
    ACTIONS(83), 1,
      sym_value,
    ACTIONS(85), 1,
      sym_newline,
    STATE(13), 1,
      sym_dc,
    STATE(19), 1,
      sym_ac,
    STATE(50), 1,
      sym_time_dependent_value,
  [267] = 5,
    ACTIONS(79), 1,
      aux_sym_ac_token1,
    ACTIONS(81), 1,
      aux_sym_time_dependent_value_token1,
    ACTIONS(87), 1,
      sym_newline,
    STATE(18), 1,
      sym_ac,
    STATE(57), 1,
      sym_time_dependent_value,
  [283] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(14), 2,
      sym_assignment,
      aux_sym_control_line_repeat1,
  [294] = 3,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(14), 2,
      sym_assignment,
      aux_sym_control_line_repeat1,
  [305] = 3,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(15), 2,
      sym_assignment,
      aux_sym_control_line_repeat1,
  [316] = 1,
    ACTIONS(100), 3,
      aux_sym_ac_token1,
      aux_sym_time_dependent_value_token1,
      sym_newline,
  [322] = 3,
    ACTIONS(81), 1,
      aux_sym_time_dependent_value_token1,
    ACTIONS(102), 1,
      sym_newline,
    STATE(59), 1,
      sym_time_dependent_value,
  [332] = 3,
    ACTIONS(81), 1,
      aux_sym_time_dependent_value_token1,
    ACTIONS(87), 1,
      sym_newline,
    STATE(57), 1,
      sym_time_dependent_value,
  [342] = 1,
    ACTIONS(104), 3,
      aux_sym_ac_token1,
      aux_sym_time_dependent_value_token1,
      sym_newline,
  [348] = 1,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [353] = 1,
    ACTIONS(108), 2,
      aux_sym_time_dependent_value_token1,
      sym_newline,
  [358] = 1,
    ACTIONS(110), 1,
      sym_node,
  [362] = 1,
    ACTIONS(112), 1,
      sym_newline,
  [366] = 1,
    ACTIONS(114), 1,
      sym_node,
  [370] = 1,
    ACTIONS(116), 1,
      sym_node,
  [374] = 1,
    ACTIONS(118), 1,
      sym_node,
  [378] = 1,
    ACTIONS(120), 1,
      sym_node,
  [382] = 1,
    ACTIONS(122), 1,
      anon_sym_EQ,
  [386] = 1,
    ACTIONS(124), 1,
      sym_newline,
  [390] = 1,
    ACTIONS(126), 1,
      sym_node,
  [394] = 1,
    ACTIONS(128), 1,
      sym_value,
  [398] = 1,
    ACTIONS(130), 1,
      sym_value,
  [402] = 1,
    ACTIONS(132), 1,
      sym_value,
  [406] = 1,
    ACTIONS(134), 1,
      sym_node,
  [410] = 1,
    ACTIONS(136), 1,
      sym_node,
  [414] = 1,
    ACTIONS(138), 1,
      sym_value,
  [418] = 1,
    ACTIONS(140), 1,
      sym_node,
  [422] = 1,
    ACTIONS(142), 1,
      sym_node,
  [426] = 1,
    ACTIONS(144), 1,
      sym_newline,
  [430] = 1,
    ACTIONS(146), 1,
      sym_newline,
  [434] = 1,
    ACTIONS(148), 1,
      sym_node,
  [438] = 1,
    ACTIONS(150), 1,
      sym_identifier,
  [442] = 1,
    ACTIONS(152), 1,
      sym_value,
  [446] = 1,
    ACTIONS(154), 1,
      sym_value,
  [450] = 1,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
  [454] = 1,
    ACTIONS(158), 1,
      sym_newline,
  [458] = 1,
    ACTIONS(160), 1,
      aux_sym_resistor_instance_token2,
  [462] = 1,
    ACTIONS(162), 1,
      aux_sym_resistor_instance_token2,
  [466] = 1,
    ACTIONS(164), 1,
      sym_newline,
  [470] = 1,
    ACTIONS(166), 1,
      aux_sym_resistor_instance_token2,
  [474] = 1,
    ACTIONS(168), 1,
      sym_newline,
  [478] = 1,
    ACTIONS(170), 1,
      aux_sym_resistor_instance_token2,
  [482] = 1,
    ACTIONS(172), 1,
      aux_sym_resistor_instance_token2,
  [486] = 1,
    ACTIONS(174), 1,
      sym_value,
  [490] = 1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
  [494] = 1,
    ACTIONS(178), 1,
      sym_newline,
  [498] = 1,
    ACTIONS(180), 1,
      sym_value,
  [502] = 1,
    ACTIONS(182), 1,
      sym_newline,
  [506] = 1,
    ACTIONS(184), 1,
      sym_value,
  [510] = 1,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
  [514] = 1,
    ACTIONS(188), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 242,
  [SMALL_STATE(13)] = 267,
  [SMALL_STATE(14)] = 283,
  [SMALL_STATE(15)] = 294,
  [SMALL_STATE(16)] = 305,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 322,
  [SMALL_STATE(19)] = 332,
  [SMALL_STATE(20)] = 342,
  [SMALL_STATE(21)] = 348,
  [SMALL_STATE(22)] = 353,
  [SMALL_STATE(23)] = 358,
  [SMALL_STATE(24)] = 362,
  [SMALL_STATE(25)] = 366,
  [SMALL_STATE(26)] = 370,
  [SMALL_STATE(27)] = 374,
  [SMALL_STATE(28)] = 378,
  [SMALL_STATE(29)] = 382,
  [SMALL_STATE(30)] = 386,
  [SMALL_STATE(31)] = 390,
  [SMALL_STATE(32)] = 394,
  [SMALL_STATE(33)] = 398,
  [SMALL_STATE(34)] = 402,
  [SMALL_STATE(35)] = 406,
  [SMALL_STATE(36)] = 410,
  [SMALL_STATE(37)] = 414,
  [SMALL_STATE(38)] = 418,
  [SMALL_STATE(39)] = 422,
  [SMALL_STATE(40)] = 426,
  [SMALL_STATE(41)] = 430,
  [SMALL_STATE(42)] = 434,
  [SMALL_STATE(43)] = 438,
  [SMALL_STATE(44)] = 442,
  [SMALL_STATE(45)] = 446,
  [SMALL_STATE(46)] = 450,
  [SMALL_STATE(47)] = 454,
  [SMALL_STATE(48)] = 458,
  [SMALL_STATE(49)] = 462,
  [SMALL_STATE(50)] = 466,
  [SMALL_STATE(51)] = 470,
  [SMALL_STATE(52)] = 474,
  [SMALL_STATE(53)] = 478,
  [SMALL_STATE(54)] = 482,
  [SMALL_STATE(55)] = 486,
  [SMALL_STATE(56)] = 490,
  [SMALL_STATE(57)] = 494,
  [SMALL_STATE(58)] = 498,
  [SMALL_STATE(59)] = 502,
  [SMALL_STATE(60)] = 506,
  [SMALL_STATE(61)] = 510,
  [SMALL_STATE(62)] = 514,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_line, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_line, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_line, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_line, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_line_repeat2, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_line_repeat2, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_line_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_line_repeat2, 2, 0, 0), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_line_repeat2, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_line_repeat2, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_line, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_line, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_line, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_line, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_voltage_source_instance, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_voltage_source_instance, 5, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_line_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_line_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dc, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_voltage_source_instance, 6, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dc, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ac, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inductor_instance, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resistor_instance, 5, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capacitor_instance, 5, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_voltage_source_instance, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transistor_instance, 6, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_voltage_source_instance, 6, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_voltage_source_instance, 7, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_dependent_value, 6, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ngspice(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
