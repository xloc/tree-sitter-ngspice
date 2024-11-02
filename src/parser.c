#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_title_line = 2,
  aux_sym_dc_token1 = 3,
  aux_sym_ac_token1 = 4,
  aux_sym_time_dependent_value_token1 = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_DOTmodel = 8,
  anon_sym_DOTtran = 9,
  anon_sym_DOTend = 10,
  anon_sym_DOTinclude = 11,
  anon_sym_EQ = 12,
  sym_part_number = 13,
  sym_identifier = 14,
  sym_dotted_identifier = 15,
  sym_node = 16,
  sym_value = 17,
  sym_r = 18,
  sym_c = 19,
  sym_l = 20,
  sym_q = 21,
  sym_v = 22,
  sym_m = 23,
  sym_comment = 24,
  anon_sym_STAR = 25,
  aux_sym_line_comment_token1 = 26,
  sym_source_file = 27,
  sym_body_line = 28,
  sym__resistor_instance = 29,
  sym__capacitor_instance = 30,
  sym__inductor_instance = 31,
  sym__transistor_instance = 32,
  sym__mosfet_instance = 33,
  sym__voltage_source_instance = 34,
  sym_dc = 35,
  sym_ac = 36,
  sym_time_dependent_value = 37,
  sym_control_line = 38,
  sym_assignment = 39,
  sym_line_comment = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym__mosfet_instance_repeat1 = 42,
  aux_sym_control_line_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_title_line] = "title_line",
  [aux_sym_dc_token1] = "dc_token1",
  [aux_sym_ac_token1] = "ac_token1",
  [aux_sym_time_dependent_value_token1] = "time_dependent_value_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOTmodel] = ".model",
  [anon_sym_DOTtran] = ".tran",
  [anon_sym_DOTend] = ".end",
  [anon_sym_DOTinclude] = ".include",
  [anon_sym_EQ] = "=",
  [sym_part_number] = "part_number",
  [sym_identifier] = "identifier",
  [sym_dotted_identifier] = "dotted_identifier",
  [sym_node] = "node",
  [sym_value] = "value",
  [sym_r] = "r",
  [sym_c] = "c",
  [sym_l] = "l",
  [sym_q] = "q",
  [sym_v] = "v",
  [sym_m] = "m",
  [sym_comment] = "comment",
  [anon_sym_STAR] = "*",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym_source_file] = "source_file",
  [sym_body_line] = "body_line",
  [sym__resistor_instance] = "_resistor_instance",
  [sym__capacitor_instance] = "_capacitor_instance",
  [sym__inductor_instance] = "_inductor_instance",
  [sym__transistor_instance] = "_transistor_instance",
  [sym__mosfet_instance] = "_mosfet_instance",
  [sym__voltage_source_instance] = "_voltage_source_instance",
  [sym_dc] = "dc",
  [sym_ac] = "ac",
  [sym_time_dependent_value] = "time_dependent_value",
  [sym_control_line] = "control_line",
  [sym_assignment] = "assignment",
  [sym_line_comment] = "line_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__mosfet_instance_repeat1] = "_mosfet_instance_repeat1",
  [aux_sym_control_line_repeat1] = "control_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_title_line] = sym_title_line,
  [aux_sym_dc_token1] = aux_sym_dc_token1,
  [aux_sym_ac_token1] = aux_sym_ac_token1,
  [aux_sym_time_dependent_value_token1] = aux_sym_time_dependent_value_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOTmodel] = anon_sym_DOTmodel,
  [anon_sym_DOTtran] = anon_sym_DOTtran,
  [anon_sym_DOTend] = anon_sym_DOTend,
  [anon_sym_DOTinclude] = anon_sym_DOTinclude,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_part_number] = sym_part_number,
  [sym_identifier] = sym_identifier,
  [sym_dotted_identifier] = sym_dotted_identifier,
  [sym_node] = sym_node,
  [sym_value] = sym_value,
  [sym_r] = sym_r,
  [sym_c] = sym_c,
  [sym_l] = sym_l,
  [sym_q] = sym_q,
  [sym_v] = sym_v,
  [sym_m] = sym_m,
  [sym_comment] = sym_comment,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym_body_line] = sym_body_line,
  [sym__resistor_instance] = sym__resistor_instance,
  [sym__capacitor_instance] = sym__capacitor_instance,
  [sym__inductor_instance] = sym__inductor_instance,
  [sym__transistor_instance] = sym__transistor_instance,
  [sym__mosfet_instance] = sym__mosfet_instance,
  [sym__voltage_source_instance] = sym__voltage_source_instance,
  [sym_dc] = sym_dc,
  [sym_ac] = sym_ac,
  [sym_time_dependent_value] = sym_time_dependent_value,
  [sym_control_line] = sym_control_line,
  [sym_assignment] = sym_assignment,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__mosfet_instance_repeat1] = aux_sym__mosfet_instance_repeat1,
  [aux_sym_control_line_repeat1] = aux_sym_control_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_title_line] = {
    .visible = true,
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
  [anon_sym_DOTinclude] = {
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
  [sym_dotted_identifier] = {
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
  [sym_m] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body_line] = {
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
  [sym__mosfet_instance] = {
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
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__mosfet_instance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_control_line_repeat1] = {
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
  [41] = 15,
  [42] = 22,
  [43] = 20,
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
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 64,
  [81] = 81,
  [82] = 82,
  [83] = 47,
  [84] = 84,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') SKIP(32);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') SKIP(4);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') SKIP(6);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'I') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 32:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') SKIP(32);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') SKIP(38);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 33:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '\n', 40,
        '(', 46,
        '*', 88,
        '.', 62,
        '$', 87,
        ';', 87,
        'C', 59,
        'c', 59,
        'L', 59,
        'l', 59,
        'M', 59,
        'm', 59,
        'Q', 59,
        'q', 59,
        'R', 59,
        'r', 59,
        'V', 59,
        'v', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 34:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '\n', 40,
        '*', 88,
        '.', 62,
        'A', 7,
        'D', 8,
        'S', 9,
        'a', 12,
        'd', 13,
        's', 21,
        '$', 87,
        ';', 87,
        'C', 82,
        'c', 82,
        'L', 83,
        'l', 83,
        'M', 86,
        'm', 86,
        'Q', 84,
        'q', 84,
        'R', 81,
        'r', 81,
        'V', 85,
        'v', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 35:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '\n', 40,
        '*', 88,
        '.', 19,
        'A', 7,
        'S', 9,
        'a', 12,
        's', 21,
        '$', 87,
        ';', 87,
        'C', 82,
        'c', 82,
        'L', 83,
        'l', 83,
        'M', 86,
        'm', 86,
        'Q', 84,
        'q', 84,
        'R', 81,
        'r', 81,
        'V', 85,
        'v', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '\n', 40,
        '*', 88,
        '.', 19,
        '$', 87,
        ';', 87,
        'C', 58,
        'c', 58,
        'L', 58,
        'l', 58,
        'M', 58,
        'm', 58,
        'Q', 58,
        'q', 58,
        'R', 58,
        'r', 58,
        'V', 58,
        'v', 58,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') SKIP(38);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') SKIP(37);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(87);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_title_line);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(42);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_title_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_dc_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_ac_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_time_dependent_value_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOTmodel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOTtran);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOTend);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOTend);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOTinclude);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOTinclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_part_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_dotted_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_node);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'a') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'c') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'd') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'e') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'l') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'l') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'n') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'o') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'r') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 'u') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_value);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_r);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_c);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_l);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_q);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_v);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_m);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == ';') ADVANCE(87);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 91},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 57},
  [63] = {.lex_state = 57},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 57},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 57},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 57},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 4},
  [84] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_dc_token1] = ACTIONS(1),
    [aux_sym_ac_token1] = ACTIONS(1),
    [aux_sym_time_dependent_value_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOTmodel] = ACTIONS(1),
    [anon_sym_DOTtran] = ACTIONS(1),
    [anon_sym_DOTend] = ACTIONS(1),
    [anon_sym_DOTinclude] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_value] = ACTIONS(1),
    [sym_r] = ACTIONS(1),
    [sym_c] = ACTIONS(1),
    [sym_l] = ACTIONS(1),
    [sym_q] = ACTIONS(1),
    [sym_v] = ACTIONS(1),
    [sym_m] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(81),
    [sym_line_comment] = STATE(1),
    [sym_title_line] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
  },
  [2] = {
    [sym_body_line] = STATE(29),
    [sym__resistor_instance] = STATE(34),
    [sym__capacitor_instance] = STATE(24),
    [sym__inductor_instance] = STATE(36),
    [sym__transistor_instance] = STATE(25),
    [sym__mosfet_instance] = STATE(26),
    [sym__voltage_source_instance] = STATE(23),
    [sym_control_line] = STATE(27),
    [sym_line_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_DOTmodel] = ACTIONS(17),
    [anon_sym_DOTtran] = ACTIONS(17),
    [anon_sym_DOTend] = ACTIONS(17),
    [anon_sym_DOTinclude] = ACTIONS(17),
    [sym_r] = ACTIONS(19),
    [sym_c] = ACTIONS(21),
    [sym_l] = ACTIONS(23),
    [sym_q] = ACTIONS(25),
    [sym_v] = ACTIONS(27),
    [sym_m] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
  },
  [3] = {
    [sym_body_line] = STATE(29),
    [sym__resistor_instance] = STATE(34),
    [sym__capacitor_instance] = STATE(24),
    [sym__inductor_instance] = STATE(36),
    [sym__transistor_instance] = STATE(25),
    [sym__mosfet_instance] = STATE(26),
    [sym__voltage_source_instance] = STATE(23),
    [sym_control_line] = STATE(27),
    [sym_line_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_DOTmodel] = ACTIONS(36),
    [anon_sym_DOTtran] = ACTIONS(36),
    [anon_sym_DOTend] = ACTIONS(36),
    [anon_sym_DOTinclude] = ACTIONS(36),
    [sym_r] = ACTIONS(39),
    [sym_c] = ACTIONS(42),
    [sym_l] = ACTIONS(45),
    [sym_q] = ACTIONS(48),
    [sym_v] = ACTIONS(51),
    [sym_m] = ACTIONS(54),
    [sym_comment] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
  },
  [4] = {
    [sym_body_line] = STATE(29),
    [sym__resistor_instance] = STATE(34),
    [sym__capacitor_instance] = STATE(24),
    [sym__inductor_instance] = STATE(36),
    [sym__transistor_instance] = STATE(25),
    [sym__mosfet_instance] = STATE(26),
    [sym__voltage_source_instance] = STATE(23),
    [sym_control_line] = STATE(27),
    [sym_line_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_DOTmodel] = ACTIONS(17),
    [anon_sym_DOTtran] = ACTIONS(17),
    [anon_sym_DOTend] = ACTIONS(17),
    [anon_sym_DOTinclude] = ACTIONS(17),
    [sym_r] = ACTIONS(19),
    [sym_c] = ACTIONS(21),
    [sym_l] = ACTIONS(23),
    [sym_q] = ACTIONS(25),
    [sym_v] = ACTIONS(27),
    [sym_m] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      aux_sym_dc_token1,
    ACTIONS(63), 1,
      aux_sym_ac_token1,
    ACTIONS(65), 1,
      aux_sym_time_dependent_value_token1,
    ACTIONS(69), 1,
      sym_value,
    STATE(5), 1,
      sym_line_comment,
    STATE(6), 1,
      sym_dc,
    STATE(17), 1,
      sym_ac,
    STATE(33), 1,
      sym_time_dependent_value,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(67), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [47] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      aux_sym_ac_token1,
    ACTIONS(65), 1,
      aux_sym_time_dependent_value_token1,
    STATE(6), 1,
      sym_line_comment,
    STATE(19), 1,
      sym_ac,
    STATE(31), 1,
      sym_time_dependent_value,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(73), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [85] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(82), 2,
      sym_dotted_identifier,
      sym_value,
    STATE(7), 2,
      sym_line_comment,
      aux_sym_control_line_repeat1,
    ACTIONS(80), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [119] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym_control_line_repeat1,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(91), 2,
      sym_dotted_identifier,
      sym_value,
    ACTIONS(89), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [155] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym_control_line_repeat1,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(91), 2,
      sym_dotted_identifier,
      sym_value,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(95), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [191] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(10), 1,
      sym_line_comment,
    STATE(15), 1,
      aux_sym__mosfet_instance_repeat1,
    STATE(22), 1,
      sym_assignment,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(99), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [226] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(105), 13,
      anon_sym_LPAREN,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_dotted_identifier,
      sym_value,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [255] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(109), 13,
      anon_sym_LPAREN,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_dotted_identifier,
      sym_value,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [284] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym__mosfet_instance_repeat1,
    STATE(13), 1,
      sym_line_comment,
    STATE(22), 1,
      sym_assignment,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(113), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [319] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(80), 13,
      anon_sym_LPAREN,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_dotted_identifier,
      sym_value,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [348] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(22), 1,
      sym_assignment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(15), 2,
      sym_line_comment,
      aux_sym__mosfet_instance_repeat1,
    ACTIONS(117), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [381] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(124), 12,
      aux_sym_ac_token1,
      aux_sym_time_dependent_value_token1,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [409] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      aux_sym_time_dependent_value_token1,
    STATE(17), 1,
      sym_line_comment,
    STATE(31), 1,
      sym_time_dependent_value,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(73), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [441] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(128), 12,
      aux_sym_ac_token1,
      aux_sym_time_dependent_value_token1,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [469] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      aux_sym_time_dependent_value_token1,
    STATE(19), 1,
      sym_line_comment,
    STATE(30), 1,
      sym_time_dependent_value,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(132), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [501] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(136), 11,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_identifier,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [528] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(140), 11,
      aux_sym_time_dependent_value_token1,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [555] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(144), 11,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_identifier,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [582] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [608] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [634] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [660] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [686] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(27), 1,
      sym_line_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(152), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [712] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(156), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [738] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(29), 1,
      sym_line_comment,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(160), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [764] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(164), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [790] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(132), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [816] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(168), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [842] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(33), 1,
      sym_line_comment,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(73), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [868] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [894] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(35), 1,
      sym_line_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(172), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [920] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(148), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [946] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(37), 1,
      sym_line_comment,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(176), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [972] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    STATE(38), 1,
      sym_line_comment,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(180), 10,
      anon_sym_DOTmodel,
      anon_sym_DOTtran,
      anon_sym_DOTend,
      anon_sym_DOTinclude,
      sym_r,
      sym_c,
      sym_l,
      sym_q,
      sym_v,
      sym_m,
  [998] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(39), 1,
      sym_line_comment,
    STATE(40), 1,
      aux_sym__mosfet_instance_repeat1,
    STATE(42), 1,
      sym_assignment,
  [1020] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_line_comment,
    STATE(41), 1,
      aux_sym__mosfet_instance_repeat1,
    STATE(42), 1,
      sym_assignment,
  [1042] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(42), 1,
      sym_assignment,
    STATE(41), 2,
      sym_line_comment,
      aux_sym__mosfet_instance_repeat1,
  [1062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(142), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(134), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [1090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      sym_node,
    STATE(44), 1,
      sym_line_comment,
  [1103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(193), 1,
      sym_node,
    STATE(45), 1,
      sym_line_comment,
  [1116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(195), 1,
      sym_node,
    STATE(46), 1,
      sym_line_comment,
  [1129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(197), 1,
      sym_value,
    STATE(47), 1,
      sym_line_comment,
  [1142] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      aux_sym_line_comment_token1,
    STATE(48), 1,
      sym_line_comment,
  [1155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(201), 1,
      sym_value,
    STATE(49), 1,
      sym_line_comment,
  [1168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_value,
    STATE(50), 1,
      sym_line_comment,
  [1181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      sym_value,
    STATE(51), 1,
      sym_line_comment,
  [1194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(207), 1,
      sym_node,
    STATE(52), 1,
      sym_line_comment,
  [1207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(209), 1,
      sym_node,
    STATE(53), 1,
      sym_line_comment,
  [1220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      sym_node,
    STATE(54), 1,
      sym_line_comment,
  [1233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(213), 1,
      sym_node,
    STATE(55), 1,
      sym_line_comment,
  [1246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      sym_node,
    STATE(56), 1,
      sym_line_comment,
  [1259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(57), 1,
      sym_line_comment,
  [1272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      sym_value,
    STATE(58), 1,
      sym_line_comment,
  [1285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(221), 1,
      sym_value,
    STATE(59), 1,
      sym_line_comment,
  [1298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_line_comment,
  [1311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(225), 1,
      sym_node,
    STATE(61), 1,
      sym_line_comment,
  [1324] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(227), 1,
      sym_part_number,
    STATE(62), 1,
      sym_line_comment,
  [1337] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(229), 1,
      sym_part_number,
    STATE(63), 1,
      sym_line_comment,
  [1350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(231), 1,
      anon_sym_EQ,
    STATE(64), 1,
      sym_line_comment,
  [1363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      sym_node,
    STATE(65), 1,
      sym_line_comment,
  [1376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(235), 1,
      sym_node,
    STATE(66), 1,
      sym_line_comment,
  [1389] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(237), 1,
      sym_part_number,
    STATE(67), 1,
      sym_line_comment,
  [1402] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(239), 1,
      sym_part_number,
    STATE(68), 1,
      sym_line_comment,
  [1415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(241), 1,
      sym_value,
    STATE(69), 1,
      sym_line_comment,
  [1428] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      sym_part_number,
    STATE(70), 1,
      sym_line_comment,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(245), 1,
      sym_node,
    STATE(71), 1,
      sym_line_comment,
  [1454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(72), 1,
      sym_line_comment,
  [1467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(249), 1,
      sym_value,
    STATE(73), 1,
      sym_line_comment,
  [1480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      sym_node,
    STATE(74), 1,
      sym_line_comment,
  [1493] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      sym_part_number,
    STATE(75), 1,
      sym_line_comment,
  [1506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(255), 1,
      sym_value,
    STATE(76), 1,
      sym_line_comment,
  [1519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(257), 1,
      sym_node,
    STATE(77), 1,
      sym_line_comment,
  [1532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_line_comment,
  [1545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(261), 1,
      sym_node,
    STATE(79), 1,
      sym_line_comment,
  [1558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(263), 1,
      anon_sym_EQ,
    STATE(80), 1,
      sym_line_comment,
  [1571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_line_comment,
  [1584] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(267), 1,
      anon_sym_LF,
    STATE(82), 1,
      sym_line_comment,
  [1597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(269), 1,
      sym_value,
    STATE(83), 1,
      sym_line_comment,
  [1610] = 1,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 47,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 119,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 226,
  [SMALL_STATE(12)] = 255,
  [SMALL_STATE(13)] = 284,
  [SMALL_STATE(14)] = 319,
  [SMALL_STATE(15)] = 348,
  [SMALL_STATE(16)] = 381,
  [SMALL_STATE(17)] = 409,
  [SMALL_STATE(18)] = 441,
  [SMALL_STATE(19)] = 469,
  [SMALL_STATE(20)] = 501,
  [SMALL_STATE(21)] = 528,
  [SMALL_STATE(22)] = 555,
  [SMALL_STATE(23)] = 582,
  [SMALL_STATE(24)] = 608,
  [SMALL_STATE(25)] = 634,
  [SMALL_STATE(26)] = 660,
  [SMALL_STATE(27)] = 686,
  [SMALL_STATE(28)] = 712,
  [SMALL_STATE(29)] = 738,
  [SMALL_STATE(30)] = 764,
  [SMALL_STATE(31)] = 790,
  [SMALL_STATE(32)] = 816,
  [SMALL_STATE(33)] = 842,
  [SMALL_STATE(34)] = 868,
  [SMALL_STATE(35)] = 894,
  [SMALL_STATE(36)] = 920,
  [SMALL_STATE(37)] = 946,
  [SMALL_STATE(38)] = 972,
  [SMALL_STATE(39)] = 998,
  [SMALL_STATE(40)] = 1020,
  [SMALL_STATE(41)] = 1042,
  [SMALL_STATE(42)] = 1062,
  [SMALL_STATE(43)] = 1076,
  [SMALL_STATE(44)] = 1090,
  [SMALL_STATE(45)] = 1103,
  [SMALL_STATE(46)] = 1116,
  [SMALL_STATE(47)] = 1129,
  [SMALL_STATE(48)] = 1142,
  [SMALL_STATE(49)] = 1155,
  [SMALL_STATE(50)] = 1168,
  [SMALL_STATE(51)] = 1181,
  [SMALL_STATE(52)] = 1194,
  [SMALL_STATE(53)] = 1207,
  [SMALL_STATE(54)] = 1220,
  [SMALL_STATE(55)] = 1233,
  [SMALL_STATE(56)] = 1246,
  [SMALL_STATE(57)] = 1259,
  [SMALL_STATE(58)] = 1272,
  [SMALL_STATE(59)] = 1285,
  [SMALL_STATE(60)] = 1298,
  [SMALL_STATE(61)] = 1311,
  [SMALL_STATE(62)] = 1324,
  [SMALL_STATE(63)] = 1337,
  [SMALL_STATE(64)] = 1350,
  [SMALL_STATE(65)] = 1363,
  [SMALL_STATE(66)] = 1376,
  [SMALL_STATE(67)] = 1389,
  [SMALL_STATE(68)] = 1402,
  [SMALL_STATE(69)] = 1415,
  [SMALL_STATE(70)] = 1428,
  [SMALL_STATE(71)] = 1441,
  [SMALL_STATE(72)] = 1454,
  [SMALL_STATE(73)] = 1467,
  [SMALL_STATE(74)] = 1480,
  [SMALL_STATE(75)] = 1493,
  [SMALL_STATE(76)] = 1506,
  [SMALL_STATE(77)] = 1519,
  [SMALL_STATE(78)] = 1532,
  [SMALL_STATE(79)] = 1545,
  [SMALL_STATE(80)] = 1558,
  [SMALL_STATE(81)] = 1571,
  [SMALL_STATE(82)] = 1584,
  [SMALL_STATE(83)] = 1597,
  [SMALL_STATE(84)] = 1610,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__voltage_source_instance, 4, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__voltage_source_instance, 4, 0, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__voltage_source_instance, 5, 0, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__voltage_source_instance, 5, 0, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_line_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_line_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_line_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_line_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_line, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_line, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_line, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_line, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mosfet_instance, 8, 0, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mosfet_instance, 8, 0, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_line_repeat1, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_line_repeat1, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_line_repeat1, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_line_repeat1, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mosfet_instance, 7, 0, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__mosfet_instance, 7, 0, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mosfet_instance_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mosfet_instance_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__mosfet_instance_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dc, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dc, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dc, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dc, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__voltage_source_instance, 6, 0, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__voltage_source_instance, 6, 0, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ac, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ac, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__mosfet_instance_repeat1, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__mosfet_instance_repeat1, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 1, 0, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 1, 0, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_line, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_line, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_dependent_value, 6, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time_dependent_value, 6, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__voltage_source_instance, 7, 0, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__voltage_source_instance, 7, 0, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__transistor_instance, 6, 0, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__transistor_instance, 6, 0, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inductor_instance, 5, 0, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inductor_instance, 5, 0, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__capacitor_instance, 5, 0, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__capacitor_instance, 5, 0, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__resistor_instance, 5, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__resistor_instance, 5, 0, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__mosfet_instance_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [265] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
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
