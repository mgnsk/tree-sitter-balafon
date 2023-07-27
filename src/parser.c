#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 9

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
  sym_decl = 35,
  sym_uint = 36,
  sym_bar = 37,
  sym_note_list = 38,
  sym_note_object = 39,
  sym_symbol = 40,
  sym_property = 41,
  sym_command = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_decl_list_repeat1 = 44,
  aux_sym_note_list_repeat1 = 45,
  aux_sym_note_object_repeat1 = 46,
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
  [sym_decl] = "decl",
  [sym_uint] = "uint",
  [sym_bar] = "bar",
  [sym_note_list] = "note_list",
  [sym_note_object] = "note_object",
  [sym_symbol] = "symbol",
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
  [sym_decl] = sym_decl,
  [sym_uint] = sym_uint,
  [sym_bar] = sym_bar,
  [sym_note_list] = sym_note_list,
  [sym_note_object] = sym_note_object,
  [sym_symbol] = sym_symbol,
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
  [sym_decl] = {
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
  [sym_note_object] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
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
  field_bpm = 2,
  field_channel = 3,
  field_control = 4,
  field_denom = 5,
  field_key = 6,
  field_note = 7,
  field_num = 8,
  field_parameter = 9,
  field_program = 10,
  field_velocity = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bar_name] = "bar_name",
  [field_bpm] = "bpm",
  [field_channel] = "channel",
  [field_control] = "control",
  [field_denom] = "denom",
  [field_key] = "key",
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
  [14] = 12,
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 54},
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
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 54},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 54},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
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
    [sym_source_file] = STATE(48),
    [sym_decl_list] = STATE(54),
    [sym_decl] = STATE(21),
    [sym_bar] = STATE(30),
    [sym_note_list] = STATE(30),
    [sym_note_object] = STATE(16),
    [sym_symbol] = STATE(2),
    [sym_command] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_decl_list_repeat1] = STATE(12),
    [aux_sym_note_list_repeat1] = STATE(16),
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
    STATE(3), 2,
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
    STATE(6), 2,
      sym_property,
      aux_sym_note_object_repeat1,
    ACTIONS(19), 6,
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
  [87] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(4), 2,
      sym_property,
      aux_sym_note_object_repeat1,
    ACTIONS(21), 6,
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
    STATE(6), 2,
      sym_property,
      aux_sym_note_object_repeat1,
    ACTIONS(23), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      sym_char,
      sym_rest,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(25), 11,
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
  [168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 17,
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
  [191] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_symbol,
    STATE(12), 1,
      aux_sym_decl_list_repeat1,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(21), 1,
      sym_decl,
    STATE(51), 1,
      sym_decl_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(32), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym_note_object,
      aux_sym_note_list_repeat1,
    STATE(30), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [233] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_symbol,
    STATE(14), 1,
      aux_sym_decl_list_repeat1,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(21), 1,
      sym_decl,
    STATE(50), 1,
      sym_decl_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(32), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym_note_object,
      aux_sym_note_list_repeat1,
    STATE(30), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [275] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_symbol,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(14), 1,
      aux_sym_decl_list_repeat1,
    STATE(21), 1,
      sym_decl,
    STATE(45), 1,
      sym_decl_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(34), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(16), 2,
      sym_note_object,
      aux_sym_note_list_repeat1,
    STATE(30), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [317] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_symbol,
    STATE(13), 1,
      aux_sym_decl_list_repeat1,
    STATE(21), 1,
      sym_decl,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    STATE(16), 2,
      sym_note_object,
      aux_sym_note_list_repeat1,
    STATE(30), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [352] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_symbol,
    STATE(13), 1,
      aux_sym_decl_list_repeat1,
    STATE(21), 1,
      sym_decl,
    ACTIONS(40), 2,
      sym_char,
      sym_rest,
    STATE(16), 2,
      sym_note_object,
      aux_sym_note_list_repeat1,
    STATE(30), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [387] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      anon_sym_COLON,
    STATE(2), 1,
      sym_symbol,
    STATE(13), 1,
      aux_sym_decl_list_repeat1,
    STATE(21), 1,
      sym_decl,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    STATE(16), 2,
      sym_note_object,
      aux_sym_note_list_repeat1,
    STATE(30), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [419] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_bar,
    ACTIONS(51), 1,
      anon_sym_assign,
    ACTIONS(53), 1,
      anon_sym_play,
    ACTIONS(55), 1,
      anon_sym_tempo,
    ACTIONS(57), 1,
      anon_sym_timesig,
    ACTIONS(59), 1,
      anon_sym_velocity,
    ACTIONS(61), 1,
      anon_sym_channel,
    ACTIONS(63), 1,
      anon_sym_program,
    ACTIONS(65), 1,
      anon_sym_control,
    ACTIONS(67), 2,
      anon_sym_start,
      anon_sym_stop,
  [454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_symbol,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    STATE(17), 2,
      sym_note_object,
      aux_sym_note_list_repeat1,
    ACTIONS(69), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACK,
  [477] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_symbol,
    ACTIONS(73), 2,
      sym_char,
      sym_rest,
    STATE(17), 2,
      sym_note_object,
      aux_sym_note_list_repeat1,
    ACTIONS(71), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACK,
  [500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(81), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_char,
      sym_rest,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(32), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      sym_char,
      sym_rest,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_symbol,
    STATE(53), 1,
      sym_note_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    STATE(16), 2,
      sym_note_object,
      aux_sym_note_list_repeat1,
  [557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(84), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      aux_sym_uint_token1,
  [577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(23), 1,
      sym_uint,
  [603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(40), 1,
      sym_uint,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(37), 1,
      sym_uint,
  [655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(43), 1,
      sym_uint,
  [665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(36), 1,
      sym_uint,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(42), 1,
      sym_uint,
  [701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(24), 1,
      sym_uint,
  [719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(35), 1,
      sym_uint,
  [729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(41), 1,
      sym_uint,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_ident,
  [770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COLON,
  [777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_char,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_ident,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_end,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COLON,
  [812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_end,
  [826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
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
  [SMALL_STATE(9)] = 191,
  [SMALL_STATE(10)] = 233,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 317,
  [SMALL_STATE(13)] = 352,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 419,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 477,
  [SMALL_STATE(18)] = 500,
  [SMALL_STATE(19)] = 518,
  [SMALL_STATE(20)] = 536,
  [SMALL_STATE(21)] = 557,
  [SMALL_STATE(22)] = 568,
  [SMALL_STATE(23)] = 577,
  [SMALL_STATE(24)] = 585,
  [SMALL_STATE(25)] = 593,
  [SMALL_STATE(26)] = 603,
  [SMALL_STATE(27)] = 613,
  [SMALL_STATE(28)] = 621,
  [SMALL_STATE(29)] = 629,
  [SMALL_STATE(30)] = 637,
  [SMALL_STATE(31)] = 645,
  [SMALL_STATE(32)] = 655,
  [SMALL_STATE(33)] = 665,
  [SMALL_STATE(34)] = 673,
  [SMALL_STATE(35)] = 683,
  [SMALL_STATE(36)] = 691,
  [SMALL_STATE(37)] = 701,
  [SMALL_STATE(38)] = 709,
  [SMALL_STATE(39)] = 719,
  [SMALL_STATE(40)] = 729,
  [SMALL_STATE(41)] = 739,
  [SMALL_STATE(42)] = 747,
  [SMALL_STATE(43)] = 755,
  [SMALL_STATE(44)] = 763,
  [SMALL_STATE(45)] = 770,
  [SMALL_STATE(46)] = 777,
  [SMALL_STATE(47)] = 784,
  [SMALL_STATE(48)] = 791,
  [SMALL_STATE(49)] = 798,
  [SMALL_STATE(50)] = 805,
  [SMALL_STATE(51)] = 812,
  [SMALL_STATE(52)] = 819,
  [SMALL_STATE(53)] = 826,
  [SMALL_STATE(54)] = 833,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_object, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_object, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_object, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_object, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_object_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_object_repeat1, 2), SHIFT_REPEAT(8),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_list, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_list, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 2), SHIFT_REPEAT(7),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 2), SHIFT_REPEAT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 7, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 6, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 8),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 7),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
