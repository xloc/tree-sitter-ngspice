#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_dc_token1 = 1,
  aux_sym_ac_token1 = 2,
  aux_sym_time_dependent_value_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DOTmodel = 6,
  anon_sym_DOTtran = 7,
  anon_sym_DOTend = 8,
  anon_sym_EQ = 9,
  sym_part_number = 10,
  sym_identifier = 11,
  sym_node = 12,
  sym_value = 13,
  sym_line_content = 14,
  sym_newline = 15,
  sym_r = 16,
  sym_c = 17,
  sym_l = 18,
  sym_q = 19,
  sym_v = 20,
  sym_source_file = 21,
  sym_title_line = 22,
  sym_instance_line = 23,
  sym__resistor_instance = 24,
  sym__capacitor_instance = 25,
  sym__inductor_instance = 26,
  sym__transistor_instance = 27,
  sym__voltage_source_instance = 28,
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
  [aux_sym_dc_token1] = "dc_token1",
  [aux_sym_ac_token1] = "ac_token1",
  [aux_sym_time_dependent_value_token1] = "time_dependent_value_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOTmodel] = ".model",
  [anon_sym_DOTtran] = ".tran",
  [anon_sym_DOTend] = ".end",
  [anon_sym_EQ] = "=",
  [sym_part_number] = "part_number",
  [sym_identifier] = "identifier",
  [sym_node] = "node",
  [sym_value] = "value",
  [sym_line_content] = "line_content",
  [sym_newline] = "newline",
  [sym_r] = "r",
  [sym_c] = "c",
  [sym_l] = "l",
  [sym_q] = "q",
  [sym_v] = "v",
  [sym_source_file] = "source_file",
  [sym_title_line] = "title_line",
  [sym_instance_line] = "instance_line",
  [sym__resistor_instance] = "_resistor_instance",
  [sym__capacitor_instance] = "_capacitor_instance",
  [sym__inductor_instance] = "_inductor_instance",
  [sym__transistor_instance] = "_transistor_instance",
  [sym__voltage_source_instance] = "_voltage_source_instance",
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
  [aux_sym_dc_token1] = aux_sym_dc_token1,
  [aux_sym_ac_token1] = aux_sym_ac_token1,
  [aux_sym_time_dependent_value_token1] = aux_sym_time_dependent_value_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOTmodel] = anon_sym_DOTmodel,
  [anon_sym_DOTtran] = anon_sym_DOTtran,
  [anon_sym_DOTend] = anon_sym_DOTend,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_part_number] = sym_part_number,
  [sym_identifier] = sym_identifier,
  [sym_node] = sym_node,
  [sym_value] = sym_value,
  [sym_line_content] = sym_line_content,
  [sym_newline] = sym_newline,
  [sym_r] = sym_r,
  [sym_c] = sym_c,
  [sym_l] = sym_l,
  [sym_q] = sym_q,
  [sym_v] = sym_v,
  [sym_source_file] = sym_source_file,
  [sym_title_line] = sym_title_line,
  [sym_instance_line] = sym_instance_line,
  [sym__resistor_instance] = sym__resistor_instance,
  [sym__capacitor_instance] = sym__capacitor_instance,
  [sym__inductor_instance] = sym__inductor_instance,
  [sym__transistor_instance] = sym__transistor_instance,
  [sym__voltage_source_instance] = sym__voltage_source_instance,
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
  [sym_part_number] = {
    .visible = true,
    .named = true,
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
  [sym_r] = {
    .visible = true,
    .named = true,
  },
  [sym_c] = {
    .visible = true,
    .named = true,
  },
  [sym_l] = {
    .visible = true,
    .named = true,
  },
  [sym_q] = {
    .visible = true,
    .named = true,
  },
  [sym_v] = {
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
  [sym__resistor_instance] = {
    .visible = false,
    .named = true,
  },
  [sym__capacitor_instance] = {
    .visible = false,
    .named = true,
  },
  [sym__inductor_instance] = {
    .visible = false,
    .named = true,
  },
  [sym__transistor_instance] = {
    .visible = false,
    .named = true,
  },
  [sym__voltage_source_instance] = {
    .visible = false,
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

enum ts_field_identifiers {
  field_device_name = 1,
  field_device_type = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_device_name] = "device_name",
  [field_device_type] = "device_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_device_name, 0, .inherited = true},
    {field_device_type, 0, .inherited = true},
  [2] =
    {field_device_name, 1},
    {field_device_type, 0},
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_line_content);
      if (eof) ADVANCE(90);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 241,
        '(', 113,
        ')', 118,
        '.', 212,
        ';', 242,
        '=', 140,
        'A', 175,
        'D', 176,
        'S', 177,
        'a', 179,
        'd', 180,
        's', 181,
        'C', 184,
        'c', 184,
        'L', 184,
        'l', 184,
        'Q', 184,
        'q', 184,
        'R', 184,
        'r', 184,
        'V', 184,
        'v', 184,
        '\t', 241,
        0x0b, 241,
        '\f', 241,
        ' ', 241,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '+') SKIP(2);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(258);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(258);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'L') ADVANCE(257);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'R') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
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
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
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
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
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
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
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
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
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
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(12);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '+') SKIP(14);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == ';') SKIP(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(185);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == ';') SKIP(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(185);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == ';') SKIP(15);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(173);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(247);
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
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'C') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(247);
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
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(247);
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
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == ';') SKIP(26);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 's') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(247);
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
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (lookahead != 0) SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '+') SKIP(28);
      if (lookahead == ';') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == ';') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == ';') SKIP(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      if (lookahead != 0) SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '+') SKIP(32);
      if (lookahead == ';') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == ';') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (lookahead != 0) SKIP(33);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == ';') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == ';') SKIP(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead != 0) SKIP(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(34);
      if (lookahead == '+') SKIP(35);
      if (lookahead == ';') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(34);
      if (lookahead == ';') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(34);
      if (lookahead == ';') SKIP(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '+') SKIP(38);
      if (lookahead == ';') SKIP(39);
      if (lookahead == '=') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(37);
      if (lookahead == ';') SKIP(39);
      if (lookahead == '=') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(37);
      if (lookahead == ';') SKIP(39);
      if (lookahead == '=') ADVANCE(139);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (lookahead != 0) SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(40);
      if (lookahead == '+') SKIP(41);
      if (lookahead == ';') SKIP(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(40);
      if (lookahead == ';') SKIP(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(40);
      if (lookahead == ';') SKIP(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '+') SKIP(44);
      if (lookahead == ';') SKIP(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ';') SKIP(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(43);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ';') SKIP(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (lookahead != 0) SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '+') SKIP(47);
      if (lookahead == ';') SKIP(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == ';') SKIP(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == ';') SKIP(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0) SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(248);
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
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(248);
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
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(106);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(248);
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
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ';') SKIP(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 's') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56);
      if (lookahead != 0) SKIP(56);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(248);
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
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == ';') SKIP(62);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead == 's') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(249);
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
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ';') SKIP(62);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(62);
      if (lookahead != 0) SKIP(62);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(249);
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
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ';') SKIP(62);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 's') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(62);
      if (lookahead != 0) SKIP(62);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ';') SKIP(62);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(62);
      if (lookahead != 0) SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(250);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == ';') SKIP(64);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(63);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(250);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ';') SKIP(64);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(64);
      if (lookahead != 0) SKIP(64);
      END_STATE();
    case 65:
      if (lookahead == 'C') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 'C') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(131);
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
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 84:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '+') SKIP(85);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ';') SKIP(86);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(258);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85);
      END_STATE();
    case 85:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ';') SKIP(86);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(258);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85);
      END_STATE();
    case 86:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') SKIP(86);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(259);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86);
      if (lookahead != 0) SKIP(86);
      END_STATE();
    case 87:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '+') SKIP(88);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == ';') SKIP(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(185);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 88:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == ';') SKIP(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(185);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == ';') SKIP(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(173);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) SKIP(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_dc_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_dc_token1);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_dc_token1);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 18,
        'D', 19,
        'S', 20,
        'a', 22,
        'd', 23,
        's', 24,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_dc_token1);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'S', 199,
        'a', 201,
        'd', 202,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_dc_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 18,
        'D', 19,
        'S', 20,
        'a', 22,
        'd', 23,
        's', 24,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'S', 199,
        'a', 201,
        'd', 202,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 18,
        'D', 19,
        'S', 20,
        'a', 22,
        'd', 23,
        's', 24,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'S', 199,
        'a', 201,
        'd', 202,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ')') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      ADVANCE_MAP(
        '.', 7,
        'C', 255,
        'c', 255,
        'L', 257,
        'l', 257,
        'Q', 259,
        'q', 259,
        'R', 253,
        'r', 253,
        'V', 261,
        'v', 261,
      );
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      ADVANCE_MAP(
        '.', 7,
        'C', 255,
        'c', 255,
        'L', 257,
        'l', 257,
        'Q', 259,
        'q', 259,
        'R', 253,
        'r', 253,
        'V', 261,
        'v', 261,
      );
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOTend);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOTend);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'C', 161,
        'D', 148,
        'S', 150,
        'a', 144,
        'c', 92,
        'd', 146,
        's', 157,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DOTend);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOTend);
      ADVANCE_MAP(
        '.', 7,
        'C', 255,
        'c', 255,
        'L', 257,
        'l', 257,
        'Q', 259,
        'q', 259,
        'R', 253,
        'r', 253,
        'V', 261,
        'v', 261,
      );
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOTend);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOTend);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_part_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '-', 242,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'C', 161,
        'D', 148,
        'S', 150,
        'a', 144,
        'c', 97,
        'd', 146,
        'n', 126,
        's', 157,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'C', 161,
        'D', 148,
        'S', 150,
        'a', 144,
        'c', 97,
        'd', 146,
        's', 157,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'C', 161,
        'D', 148,
        'S', 150,
        'a', 144,
        'c', 92,
        'd', 146,
        'e', 151,
        's', 157,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'C', 161,
        'D', 148,
        'S', 150,
        'a', 144,
        'c', 92,
        'd', 146,
        's', 157,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'C', 97,
        'D', 148,
        'S', 150,
        'a', 144,
        'c', 161,
        'd', 146,
        's', 157,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'C', 92,
        'D', 148,
        'S', 150,
        'a', 144,
        'c', 161,
        'd', 146,
        's', 157,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'E', 142,
        'S', 150,
        'a', 144,
        'd', 146,
        'e', 161,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'I', 152,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'L', 161,
        'S', 150,
        'a', 144,
        'd', 146,
        'l', 120,
        's', 157,
        'C', 161,
        'c', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'N', 103,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'R', 161,
        'S', 150,
        'a', 144,
        'd', 146,
        'r', 154,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 143,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 132,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 145,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        'i', 158,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        'n', 103,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        'n', 155,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        'o', 156,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '-', 15,
        '.', 207,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'E', 162,
        'e', 173,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'L', 173,
        'l', 121,
        'C', 173,
        'c', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'R', 173,
        'r', 166,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'a', 171,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'd', 133,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'd', 169,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'e', 164,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'n', 167,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'n', 127,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'o', 168,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ')') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_node);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'E', 142,
        'S', 150,
        'a', 144,
        'd', 146,
        'e', 161,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_node);
      if (lookahead == '-') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_node);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_node);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_node);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_node);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_node);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'E', 142,
        'S', 150,
        'a', 144,
        'd', 146,
        'e', 159,
        'm', 160,
        's', 157,
        't', 153,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        '-', 17,
        '.', 198,
        'A', 196,
        'D', 197,
        'S', 199,
        'a', 201,
        'd', 202,
        's', 203,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        '.', 198,
        'A', 196,
        'D', 197,
        'E', 194,
        'S', 199,
        'a', 201,
        'd', 202,
        'e', 205,
        's', 203,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'C', 99,
        'D', 197,
        'S', 199,
        'a', 201,
        'd', 202,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'C', 94,
        'D', 197,
        'S', 199,
        'a', 201,
        'd', 202,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'E', 194,
        'S', 199,
        'a', 201,
        'd', 202,
        'e', 205,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'I', 200,
        'S', 199,
        'a', 201,
        'd', 202,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'N', 105,
        'S', 199,
        'a', 201,
        'd', 202,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'S', 199,
        'a', 201,
        'c', 99,
        'd', 202,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'S', 199,
        'a', 201,
        'c', 94,
        'd', 202,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'S', 199,
        'a', 201,
        'd', 202,
        'i', 204,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'S', 199,
        'a', 201,
        'd', 202,
        'n', 105,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '\n', 247,
        '\r', 26,
        'A', 196,
        'D', 197,
        'S', 199,
        'a', 201,
        'd', 202,
        's', 203,
      );
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'E', 162,
        'e', 173,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_value);
      ADVANCE_MAP(
        '(', 111,
        '.', 207,
        'E', 162,
        'e', 170,
        'm', 172,
        't', 165,
        'C', 173,
        'c', 173,
        'L', 173,
        'l', 173,
        'Q', 173,
        'q', 173,
        'R', 173,
        'r', 173,
        'V', 173,
        'v', 173,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'E') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(210);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'l') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'l') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_value);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_value);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_line_content);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 241,
        '(', 113,
        ')', 118,
        '+', 241,
        '.', 212,
        ';', 242,
        '=', 140,
        'A', 175,
        'D', 176,
        'S', 177,
        'a', 179,
        'd', 180,
        's', 181,
        'C', 184,
        'c', 184,
        'L', 184,
        'l', 184,
        'Q', 184,
        'q', 184,
        'R', 184,
        'r', 184,
        'V', 184,
        'v', 184,
        '\t', 241,
        0x0b, 241,
        '\f', 241,
        ' ', 241,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_line_content);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 241,
        '(', 113,
        ')', 118,
        '.', 212,
        ';', 242,
        '=', 140,
        'A', 175,
        'D', 176,
        'S', 177,
        'a', 179,
        'd', 180,
        's', 181,
        'C', 184,
        'c', 184,
        'L', 184,
        'l', 184,
        'Q', 184,
        'q', 184,
        'R', 184,
        'r', 184,
        'V', 184,
        'v', 184,
        '\t', 241,
        0x0b, 241,
        '\f', 241,
        ' ', 241,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_line_content);
      ADVANCE_MAP(
        '\n', 240,
        '\r', 242,
        '(', 110,
        ')', 115,
        '.', 193,
        ';', 242,
        '=', 138,
        'A', 147,
        'D', 148,
        'S', 150,
        'a', 144,
        'd', 146,
        's', 157,
        'C', 161,
        'c', 161,
        'L', 161,
        'l', 161,
        'Q', 161,
        'q', 161,
        'R', 161,
        'r', 161,
        'V', 161,
        'v', 161,
        '\t', 242,
        0x0b, 242,
        '\f', 242,
        ' ', 242,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_line_content);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_line_content);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_line_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_line_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\r') ADVANCE(16);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(49);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(57);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(250);
      if (lookahead == '\r') ADVANCE(63);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_r);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_r);
      ADVANCE_MAP(
        '.', 7,
        'a', 10,
        'C', 255,
        'c', 255,
        'L', 257,
        'l', 257,
        'Q', 259,
        'q', 259,
        'R', 253,
        'r', 253,
        'V', 261,
        'v', 261,
      );
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_r);
      ADVANCE_MAP(
        '.', 7,
        'C', 255,
        'c', 255,
        'L', 257,
        'l', 257,
        'Q', 259,
        'q', 259,
        'R', 253,
        'r', 253,
        'V', 261,
        'v', 261,
      );
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_c);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_c);
      ADVANCE_MAP(
        '.', 7,
        'C', 255,
        'c', 255,
        'L', 257,
        'l', 257,
        'Q', 259,
        'q', 259,
        'R', 253,
        'r', 253,
        'V', 261,
        'v', 261,
      );
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_l);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_l);
      ADVANCE_MAP(
        '.', 7,
        'C', 255,
        'c', 255,
        'L', 257,
        'l', 257,
        'Q', 259,
        'q', 259,
        'R', 253,
        'r', 253,
        'V', 261,
        'v', 261,
      );
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_q);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_q);
      ADVANCE_MAP(
        '.', 7,
        'C', 255,
        'c', 255,
        'L', 257,
        'l', 257,
        'Q', 259,
        'q', 259,
        'R', 253,
        'r', 253,
        'V', 261,
        'v', 261,
      );
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_v);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_v);
      ADVANCE_MAP(
        '.', 7,
        'C', 255,
        'c', 255,
        'L', 257,
        'l', 257,
        'Q', 259,
        'q', 259,
        'R', 253,
        'r', 253,
        'V', 261,
        'v', 261,
      );
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 243},
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
  [12] = {.lex_state = 85},
  [13] = {.lex_state = 85},
  [14] = {.lex_state = 85},
  [15] = {.lex_state = 85},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 63},
  [31] = {.lex_state = 141},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 141},
  [34] = {.lex_state = 141},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 141},
  [42] = {.lex_state = 63},
  [43] = {.lex_state = 32},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 63},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 141},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 44},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 63},
  [60] = {.lex_state = 63},
  [61] = {.lex_state = 63},
  [62] = {.lex_state = 63},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 63},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 63},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 47},
  [70] = {.lex_state = 63},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_r] = ACTIONS(1),
    [sym_c] = ACTIONS(1),
    [sym_l] = ACTIONS(1),
    [sym_q] = ACTIONS(1),
    [sym_v] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym_title_line] = STATE(2),
    [sym_line_content] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_r,
    ACTIONS(11), 1,
      sym_c,
    ACTIONS(13), 1,
      sym_l,
    ACTIONS(15), 1,
      sym_q,
    ACTIONS(17), 1,
      sym_v,
    STATE(42), 1,
      sym__capacitor_instance,
    STATE(45), 1,
      sym__resistor_instance,
    STATE(61), 1,
      sym__voltage_source_instance,
    STATE(62), 1,
      sym__transistor_instance,
    STATE(64), 1,
      sym__inductor_instance,
    ACTIONS(7), 3,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
    STATE(4), 3,
      sym_instance_line,
      sym_control_line,
      aux_sym_source_file_repeat1,
  [44] = 13,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      sym_r,
    ACTIONS(27), 1,
      sym_c,
    ACTIONS(30), 1,
      sym_l,
    ACTIONS(33), 1,
      sym_q,
    ACTIONS(36), 1,
      sym_v,
    STATE(42), 1,
      sym__capacitor_instance,
    STATE(45), 1,
      sym__resistor_instance,
    STATE(61), 1,
      sym__voltage_source_instance,
    STATE(62), 1,
      sym__transistor_instance,
    STATE(64), 1,
      sym__inductor_instance,
    ACTIONS(21), 3,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
    STATE(3), 3,
      sym_instance_line,
      sym_control_line,
      aux_sym_source_file_repeat1,
  [88] = 13,
    ACTIONS(9), 1,
      sym_r,
    ACTIONS(11), 1,
      sym_c,
    ACTIONS(13), 1,
      sym_l,
    ACTIONS(15), 1,
      sym_q,
    ACTIONS(17), 1,
      sym_v,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym__capacitor_instance,
    STATE(45), 1,
      sym__resistor_instance,
    STATE(61), 1,
      sym__voltage_source_instance,
    STATE(62), 1,
      sym__transistor_instance,
    STATE(64), 1,
      sym__inductor_instance,
    ACTIONS(7), 3,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
    STATE(3), 3,
      sym_instance_line,
      sym_control_line,
      aux_sym_source_file_repeat1,
  [132] = 5,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym_control_line_repeat2,
    ACTIONS(47), 2,
      sym_identifier,
      sym_value,
    ACTIONS(45), 8,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [156] = 5,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      aux_sym_control_line_repeat2,
    ACTIONS(56), 2,
      sym_identifier,
      sym_value,
    ACTIONS(54), 8,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [180] = 5,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_control_line_repeat2,
    ACTIONS(63), 2,
      sym_identifier,
      sym_value,
    ACTIONS(61), 8,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [204] = 2,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 11,
      anon_sym_LPAREN,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_identifier,
      sym_value,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [221] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 11,
      anon_sym_LPAREN,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_identifier,
      sym_value,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [238] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 8,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [252] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 8,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [266] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 8,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [280] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 8,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [294] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 8,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [308] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 8,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
  [322] = 8,
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
    STATE(17), 1,
      sym_dc,
    STATE(23), 1,
      sym_ac,
    STATE(59), 1,
      sym_time_dependent_value,
  [347] = 5,
    ACTIONS(79), 1,
      aux_sym_ac_token1,
    ACTIONS(81), 1,
      aux_sym_time_dependent_value_token1,
    ACTIONS(87), 1,
      sym_newline,
    STATE(21), 1,
      sym_ac,
    STATE(65), 1,
      sym_time_dependent_value,
  [363] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(19), 2,
      sym_assignment,
      aux_sym_control_line_repeat1,
  [374] = 3,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(19), 2,
      sym_assignment,
      aux_sym_control_line_repeat1,
  [385] = 3,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(18), 2,
      sym_assignment,
      aux_sym_control_line_repeat1,
  [396] = 3,
    ACTIONS(81), 1,
      aux_sym_time_dependent_value_token1,
    ACTIONS(100), 1,
      sym_newline,
    STATE(67), 1,
      sym_time_dependent_value,
  [406] = 1,
    ACTIONS(102), 3,
      aux_sym_ac_token1,
      aux_sym_time_dependent_value_token1,
      sym_newline,
  [412] = 3,
    ACTIONS(81), 1,
      aux_sym_time_dependent_value_token1,
    ACTIONS(87), 1,
      sym_newline,
    STATE(65), 1,
      sym_time_dependent_value,
  [422] = 1,
    ACTIONS(104), 3,
      aux_sym_ac_token1,
      aux_sym_time_dependent_value_token1,
      sym_newline,
  [428] = 1,
    ACTIONS(106), 2,
      aux_sym_time_dependent_value_token1,
      sym_newline,
  [433] = 1,
    ACTIONS(108), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [438] = 1,
    ACTIONS(110), 1,
      sym_value,
  [442] = 1,
    ACTIONS(112), 1,
      sym_node,
  [446] = 1,
    ACTIONS(114), 1,
      sym_node,
  [450] = 1,
    ACTIONS(116), 1,
      sym_newline,
  [454] = 1,
    ACTIONS(118), 1,
      sym_part_number,
  [458] = 1,
    ACTIONS(120), 1,
      anon_sym_EQ,
  [462] = 1,
    ACTIONS(122), 1,
      sym_part_number,
  [466] = 1,
    ACTIONS(124), 1,
      sym_part_number,
  [470] = 1,
    ACTIONS(126), 1,
      sym_node,
  [474] = 1,
    ACTIONS(128), 1,
      sym_node,
  [478] = 1,
    ACTIONS(130), 1,
      sym_node,
  [482] = 1,
    ACTIONS(132), 1,
      sym_node,
  [486] = 1,
    ACTIONS(134), 1,
      sym_node,
  [490] = 1,
    ACTIONS(136), 1,
      sym_value,
  [494] = 1,
    ACTIONS(138), 1,
      sym_part_number,
  [498] = 1,
    ACTIONS(140), 1,
      sym_newline,
  [502] = 1,
    ACTIONS(142), 1,
      sym_value,
  [506] = 1,
    ACTIONS(144), 1,
      sym_value,
  [510] = 1,
    ACTIONS(146), 1,
      sym_newline,
  [514] = 1,
    ACTIONS(148), 1,
      sym_node,
  [518] = 1,
    ACTIONS(150), 1,
      sym_part_number,
  [522] = 1,
    ACTIONS(152), 1,
      sym_node,
  [526] = 1,
    ACTIONS(154), 1,
      sym_newline,
  [530] = 1,
    ACTIONS(156), 1,
      sym_newline,
  [534] = 1,
    ACTIONS(158), 1,
      sym_newline,
  [538] = 1,
    ACTIONS(160), 1,
      sym_identifier,
  [542] = 1,
    ACTIONS(162), 1,
      sym_value,
  [546] = 1,
    ACTIONS(164), 1,
      sym_value,
  [550] = 1,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
  [554] = 1,
    ACTIONS(168), 1,
      sym_node,
  [558] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [562] = 1,
    ACTIONS(172), 1,
      sym_node,
  [566] = 1,
    ACTIONS(174), 1,
      sym_newline,
  [570] = 1,
    ACTIONS(176), 1,
      sym_newline,
  [574] = 1,
    ACTIONS(178), 1,
      sym_newline,
  [578] = 1,
    ACTIONS(180), 1,
      sym_newline,
  [582] = 1,
    ACTIONS(182), 1,
      sym_value,
  [586] = 1,
    ACTIONS(184), 1,
      sym_newline,
  [590] = 1,
    ACTIONS(186), 1,
      sym_newline,
  [594] = 1,
    ACTIONS(188), 1,
      sym_value,
  [598] = 1,
    ACTIONS(190), 1,
      sym_newline,
  [602] = 1,
    ACTIONS(192), 1,
      sym_value,
  [606] = 1,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
  [610] = 1,
    ACTIONS(196), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 238,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 322,
  [SMALL_STATE(17)] = 347,
  [SMALL_STATE(18)] = 363,
  [SMALL_STATE(19)] = 374,
  [SMALL_STATE(20)] = 385,
  [SMALL_STATE(21)] = 396,
  [SMALL_STATE(22)] = 406,
  [SMALL_STATE(23)] = 412,
  [SMALL_STATE(24)] = 422,
  [SMALL_STATE(25)] = 428,
  [SMALL_STATE(26)] = 433,
  [SMALL_STATE(27)] = 438,
  [SMALL_STATE(28)] = 442,
  [SMALL_STATE(29)] = 446,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 454,
  [SMALL_STATE(32)] = 458,
  [SMALL_STATE(33)] = 462,
  [SMALL_STATE(34)] = 466,
  [SMALL_STATE(35)] = 470,
  [SMALL_STATE(36)] = 474,
  [SMALL_STATE(37)] = 478,
  [SMALL_STATE(38)] = 482,
  [SMALL_STATE(39)] = 486,
  [SMALL_STATE(40)] = 490,
  [SMALL_STATE(41)] = 494,
  [SMALL_STATE(42)] = 498,
  [SMALL_STATE(43)] = 502,
  [SMALL_STATE(44)] = 506,
  [SMALL_STATE(45)] = 510,
  [SMALL_STATE(46)] = 514,
  [SMALL_STATE(47)] = 518,
  [SMALL_STATE(48)] = 522,
  [SMALL_STATE(49)] = 526,
  [SMALL_STATE(50)] = 530,
  [SMALL_STATE(51)] = 534,
  [SMALL_STATE(52)] = 538,
  [SMALL_STATE(53)] = 542,
  [SMALL_STATE(54)] = 546,
  [SMALL_STATE(55)] = 550,
  [SMALL_STATE(56)] = 554,
  [SMALL_STATE(57)] = 558,
  [SMALL_STATE(58)] = 562,
  [SMALL_STATE(59)] = 566,
  [SMALL_STATE(60)] = 570,
  [SMALL_STATE(61)] = 574,
  [SMALL_STATE(62)] = 578,
  [SMALL_STATE(63)] = 582,
  [SMALL_STATE(64)] = 586,
  [SMALL_STATE(65)] = 590,
  [SMALL_STATE(66)] = 594,
  [SMALL_STATE(67)] = 598,
  [SMALL_STATE(68)] = 602,
  [SMALL_STATE(69)] = 606,
  [SMALL_STATE(70)] = 610,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_line, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_line, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_line_repeat2, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_line_repeat2, 2, 0, 0), SHIFT_REPEAT(20),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_line_repeat2, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_line_repeat2, 2, 0, 0), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_line, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_line, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_line_repeat2, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_line_repeat2, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_line, 2, 0, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instance_line, 2, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_line, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_line, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__voltage_source_instance, 4, 0, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__voltage_source_instance, 5, 0, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_line_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_line_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__voltage_source_instance, 6, 0, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dc, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dc, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ac, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resistor_instance, 5, 0, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__capacitor_instance, 5, 0, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inductor_instance, 5, 0, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__voltage_source_instance, 5, 0, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__transistor_instance, 6, 0, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__voltage_source_instance, 6, 0, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__voltage_source_instance, 7, 0, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_dependent_value, 6, 0, 0),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
