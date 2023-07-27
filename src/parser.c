#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  sym_char = 3,
  aux_sym_uint_token1 = 4,
  sym_rest = 5,
  sym_ident = 6,
  anon_sym_COLON = 7,
  anon_sym_bar = 8,
  anon_sym_end = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_POUND = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_BQUOTE = 14,
  anon_sym_GT = 15,
  anon_sym_CARET = 16,
  anon_sym_RPAREN = 17,
  anon_sym_DOT = 18,
  anon_sym_SLASH3 = 19,
  anon_sym_SLASH5 = 20,
  anon_sym_STAR = 21,
  anon_sym_assign = 22,
  anon_sym_play = 23,
  anon_sym_tempo = 24,
  anon_sym_timesig = 25,
  anon_sym_velocity = 26,
  anon_sym_channel = 27,
  anon_sym_program = 28,
  anon_sym_control = 29,
  anon_sym_start = 30,
  anon_sym_stop = 31,
  sym_comment = 32,
  sym_source_file = 33,
  sym_decl_list = 34,
  sym_uint = 35,
  sym_bar = 36,
  sym_note_list = 37,
  sym_property = 38,
  sym_command = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_decl_list_repeat1 = 41,
  aux_sym_note_list_repeat1 = 42,
  aux_sym_note_object_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [sym_char] = "char",
  [aux_sym_uint_token1] = "uint_token1",
  [sym_rest] = "rest",
  [sym_ident] = "ident",
  [anon_sym_COLON] = ":",
  [anon_sym_bar] = "bar",
  [anon_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_GT] = ">",
  [anon_sym_CARET] = "^",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH3] = "/3",
  [anon_sym_SLASH5] = "/5",
  [anon_sym_STAR] = "*",
  [anon_sym_assign] = "assign",
  [anon_sym_play] = "play",
  [anon_sym_tempo] = "tempo",
  [anon_sym_timesig] = "timesig",
  [anon_sym_velocity] = "velocity",
  [anon_sym_channel] = "channel",
  [anon_sym_program] = "program",
  [anon_sym_control] = "control",
  [anon_sym_start] = "start",
  [anon_sym_stop] = "stop",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_decl_list] = "decl_list",
  [sym_uint] = "uint",
  [sym_bar] = "bar",
  [sym_note_list] = "note_list",
  [sym_property] = "property",
  [sym_command] = "command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_decl_list_repeat1] = "decl_list_repeat1",
  [aux_sym_note_list_repeat1] = "note_list_repeat1",
  [aux_sym_note_object_repeat1] = "note_object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [sym_char] = sym_char,
  [aux_sym_uint_token1] = aux_sym_uint_token1,
  [sym_rest] = sym_rest,
  [sym_ident] = sym_ident,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_bar] = anon_sym_bar,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH3] = anon_sym_SLASH3,
  [anon_sym_SLASH5] = anon_sym_SLASH5,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_assign] = anon_sym_assign,
  [anon_sym_play] = anon_sym_play,
  [anon_sym_tempo] = anon_sym_tempo,
  [anon_sym_timesig] = anon_sym_timesig,
  [anon_sym_velocity] = anon_sym_velocity,
  [anon_sym_channel] = anon_sym_channel,
  [anon_sym_program] = anon_sym_program,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_stop] = anon_sym_stop,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_decl_list] = sym_decl_list,
  [sym_uint] = sym_uint,
  [sym_bar] = sym_bar,
  [sym_note_list] = sym_note_list,
  [sym_property] = sym_property,
  [sym_command] = sym_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_decl_list_repeat1] = aux_sym_decl_list_repeat1,
  [aux_sym_note_list_repeat1] = aux_sym_note_list_repeat1,
  [aux_sym_note_object_repeat1] = aux_sym_note_object_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_uint_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_play] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tempo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timesig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_velocity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_channel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_program] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_list] = {
    .visible = true,
    .named = true,
  },
  [sym_uint] = {
    .visible = true,
    .named = true,
  },
  [sym_bar] = {
    .visible = true,
    .named = true,
  },
  [sym_note_list] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_object_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_bar_name = 1,
  field_body = 2,
  field_bpm = 3,
  field_channel = 4,
  field_control = 5,
  field_denom = 6,
  field_key = 7,
  field_name = 8,
  field_note = 9,
  field_num = 10,
  field_parameter = 11,
  field_program = 12,
  field_velocity = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bar_name] = "bar_name",
  [field_body] = "body",
  [field_bpm] = "bpm",
  [field_channel] = "channel",
  [field_control] = "control",
  [field_denom] = "denom",
  [field_key] = "key",
  [field_name] = "name",
  [field_note] = "note",
  [field_num] = "num",
  [field_parameter] = "parameter",
  [field_program] = "program",
  [field_velocity] = "velocity",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_bar_name, 2},
  [1] =
    {field_bpm, 2},
  [2] =
    {field_velocity, 2},
  [3] =
    {field_channel, 2},
  [4] =
    {field_program, 2},
  [5] =
    {field_key, 3},
    {field_note, 2},
  [7] =
    {field_denom, 3},
    {field_num, 2},
  [9] =
    {field_control, 2},
    {field_parameter, 3},
  [11] =
    {field_body, 3},
    {field_name, 2},
  [13] =
    {field_body, 4},
    {field_name, 2},
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
  [14] = 13,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '^') ADVANCE(72);
      if (lookahead == '`') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '3') ADVANCE(75);
      if (lookahead == '5') ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(54)
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == '/') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_uint_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_bar);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH3);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASH5);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_play);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_tempo);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_timesig);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_velocity);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_channel);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_program);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 55},
  [47] = {.lex_state = 54},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 54},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [aux_sym_uint_token1] = ACTIONS(1),
    [sym_rest] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH3] = ACTIONS(1),
    [anon_sym_SLASH5] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_decl_list] = STATE(52),
    [sym_bar] = STATE(21),
    [sym_note_list] = STATE(21),
    [sym_command] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_decl_list_repeat1] = STATE(13),
    [aux_sym_note_list_repeat1] = STATE(17),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [sym_char] = ACTIONS(7),
    [sym_rest] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(5), 2,
      sym_property,
      aux_sym_note_object_repeat1,
    ACTIONS(13), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_char,
      sym_rest,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(15), 11,
      aux_sym_uint_token1,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH3,
      anon_sym_SLASH5,
      anon_sym_STAR,
  [29] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 2,
      sym_property,
      aux_sym_note_object_repeat1,
    ACTIONS(17), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_char,
      sym_rest,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(15), 11,
      aux_sym_uint_token1,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH3,
      anon_sym_SLASH5,
      anon_sym_STAR,
  [58] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 2,
      sym_property,
      aux_sym_note_object_repeat1,
    ACTIONS(19), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_char,
      sym_rest,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(21), 11,
      aux_sym_uint_token1,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH3,
      anon_sym_SLASH5,
      anon_sym_STAR,
  [87] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 2,
      sym_property,
      aux_sym_note_object_repeat1,
    ACTIONS(24), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_char,
      sym_rest,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(15), 11,
      aux_sym_uint_token1,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH3,
      anon_sym_SLASH5,
      anon_sym_STAR,
  [116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 2,
      sym_property,
      aux_sym_note_object_repeat1,
    ACTIONS(26), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_char,
      sym_rest,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(15), 11,
      aux_sym_uint_token1,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH3,
      anon_sym_SLASH5,
      anon_sym_STAR,
  [145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 17,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_char,
      aux_sym_uint_token1,
      sym_rest,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      anon_sym_GT,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SLASH3,
      anon_sym_SLASH5,
      anon_sym_STAR,
  [168] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(14), 1,
      aux_sym_decl_list_repeat1,
    STATE(17), 1,
      aux_sym_note_list_repeat1,
    STATE(43), 1,
      sym_decl_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(30), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(21), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [203] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym_decl_list_repeat1,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    STATE(17), 1,
      aux_sym_note_list_repeat1,
    STATE(49), 1,
      sym_decl_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(32), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(21), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [238] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      aux_sym_decl_list_repeat1,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    STATE(17), 1,
      aux_sym_note_list_repeat1,
    STATE(48), 1,
      sym_decl_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(32), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(21), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [273] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_bar,
    ACTIONS(36), 1,
      anon_sym_assign,
    ACTIONS(38), 1,
      anon_sym_play,
    ACTIONS(40), 1,
      anon_sym_tempo,
    ACTIONS(42), 1,
      anon_sym_timesig,
    ACTIONS(44), 1,
      anon_sym_velocity,
    ACTIONS(46), 1,
      anon_sym_channel,
    ACTIONS(48), 1,
      anon_sym_program,
    ACTIONS(50), 1,
      anon_sym_control,
    ACTIONS(52), 2,
      anon_sym_start,
      anon_sym_stop,
  [308] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_COLON,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym_decl_list_repeat1,
    STATE(17), 1,
      aux_sym_note_list_repeat1,
    ACTIONS(56), 2,
      sym_char,
      sym_rest,
    STATE(21), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [336] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_decl_list_repeat1,
    STATE(17), 1,
      aux_sym_note_list_repeat1,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    STATE(21), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_COLON,
    STATE(12), 1,
      aux_sym_decl_list_repeat1,
    STATE(17), 1,
      aux_sym_note_list_repeat1,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    STATE(21), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(69), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      sym_char,
      sym_rest,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(32), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      sym_char,
      sym_rest,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_note_list_repeat1,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(72), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACK,
  [444] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_note_list_repeat1,
    ACTIONS(74), 2,
      sym_char,
      sym_rest,
    ACTIONS(26), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACK,
  [463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      aux_sym_note_list_repeat1,
    STATE(51), 1,
      sym_note_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
  [480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      aux_sym_uint_token1,
  [489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(82), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_uint_token1,
    STATE(22), 1,
      sym_uint,
  [526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_uint_token1,
    STATE(39), 1,
      sym_uint,
  [536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_uint_token1,
    STATE(36), 1,
      sym_uint,
  [578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_uint_token1,
    STATE(41), 1,
      sym_uint,
  [588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_uint_token1,
    STATE(35), 1,
      sym_uint,
  [606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_uint_token1,
    STATE(40), 1,
      sym_uint,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_uint_token1,
    STATE(23), 1,
      sym_uint,
  [642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_uint_token1,
    STATE(34), 1,
      sym_uint,
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_uint_token1,
    STATE(29), 1,
      sym_uint,
  [662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_char,
  [685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_COLON,
  [692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_ident,
  [699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
  [706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_ident,
  [713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_end,
  [720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_COLON,
  [727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_end,
  [741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_RBRACK,
  [748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 238,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 336,
  [SMALL_STATE(14)] = 364,
  [SMALL_STATE(15)] = 389,
  [SMALL_STATE(16)] = 407,
  [SMALL_STATE(17)] = 425,
  [SMALL_STATE(18)] = 444,
  [SMALL_STATE(19)] = 463,
  [SMALL_STATE(20)] = 480,
  [SMALL_STATE(21)] = 489,
  [SMALL_STATE(22)] = 500,
  [SMALL_STATE(23)] = 508,
  [SMALL_STATE(24)] = 516,
  [SMALL_STATE(25)] = 526,
  [SMALL_STATE(26)] = 536,
  [SMALL_STATE(27)] = 544,
  [SMALL_STATE(28)] = 552,
  [SMALL_STATE(29)] = 560,
  [SMALL_STATE(30)] = 568,
  [SMALL_STATE(31)] = 578,
  [SMALL_STATE(32)] = 588,
  [SMALL_STATE(33)] = 596,
  [SMALL_STATE(34)] = 606,
  [SMALL_STATE(35)] = 614,
  [SMALL_STATE(36)] = 624,
  [SMALL_STATE(37)] = 632,
  [SMALL_STATE(38)] = 642,
  [SMALL_STATE(39)] = 652,
  [SMALL_STATE(40)] = 662,
  [SMALL_STATE(41)] = 670,
  [SMALL_STATE(42)] = 678,
  [SMALL_STATE(43)] = 685,
  [SMALL_STATE(44)] = 692,
  [SMALL_STATE(45)] = 699,
  [SMALL_STATE(46)] = 706,
  [SMALL_STATE(47)] = 713,
  [SMALL_STATE(48)] = 720,
  [SMALL_STATE(49)] = 727,
  [SMALL_STATE(50)] = 734,
  [SMALL_STATE(51)] = 741,
  [SMALL_STATE(52)] = 748,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_object_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_object_repeat1, 2), SHIFT_REPEAT(7),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2), SHIFT_REPEAT(3),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2), SHIFT_REPEAT(19),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_list, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_list, 1),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 2), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 2), SHIFT_REPEAT(19),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 7, .production_id = 10),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 6, .production_id = 9),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 8),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 7),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_balafon(void) {
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
