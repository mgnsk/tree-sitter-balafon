#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
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
  anon_sym_key = 25,
  anon_sym_time = 26,
  anon_sym_velocity = 27,
  anon_sym_channel = 28,
  anon_sym_voice = 29,
  anon_sym_program = 30,
  anon_sym_control = 31,
  anon_sym_start = 32,
  anon_sym_stop = 33,
  sym_comment = 34,
  sym_source_file = 35,
  sym_decl_list = 36,
  sym_uint = 37,
  sym_bar = 38,
  sym_note_list = 39,
  sym_property = 40,
  sym_command = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_decl_list_repeat1 = 43,
  aux_sym_note_list_repeat1 = 44,
  aux_sym_note_object_repeat1 = 45,
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
  [anon_sym_key] = "key",
  [anon_sym_time] = "time",
  [anon_sym_velocity] = "velocity",
  [anon_sym_channel] = "channel",
  [anon_sym_voice] = "voice",
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
  [anon_sym_key] = anon_sym_key,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_velocity] = anon_sym_velocity,
  [anon_sym_channel] = anon_sym_channel,
  [anon_sym_voice] = anon_sym_voice,
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
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
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
  [anon_sym_voice] = {
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

enum ts_field_identifiers {
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
  field_scale = 13,
  field_velocity = 14,
  field_voice = 15,
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
  [field_scale] = "scale",
  [field_velocity] = "velocity",
  [field_voice] = "voice",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_bar_name, 2},
  [1] =
    {field_bpm, 2},
  [2] =
    {field_scale, 2},
  [3] =
    {field_velocity, 2},
  [4] =
    {field_channel, 2},
  [5] =
    {field_voice, 2},
  [6] =
    {field_program, 2},
  [7] =
    {field_key, 3},
    {field_note, 2},
  [9] =
    {field_denom, 3},
    {field_num, 2},
  [11] =
    {field_control, 2},
    {field_parameter, 3},
  [13] =
    {field_body, 3},
    {field_name, 2},
  [15] =
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
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '\n', 60,
        '#', 70,
        '$', 71,
        ')', 75,
        '*', 79,
        '-', 63,
        '.', 76,
        '/', 2,
        ':', 65,
        ';', 59,
        '>', 73,
        '[', 68,
        ']', 69,
        '^', 74,
        '`', 72,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '3') ADVANCE(77);
      if (lookahead == '5') ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '/', 1,
        'a', 49,
        'b', 7,
        'c', 23,
        'e', 34,
        'k', 15,
        'p', 30,
        's', 51,
        't', 16,
        'v', 17,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_uint_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_bar);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH3);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH5);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_assign);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_play);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_tempo);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_velocity);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_channel);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_voice);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_program);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
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
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
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
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
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
    [sym_source_file] = STATE(49),
    [sym_decl_list] = STATE(56),
    [sym_bar] = STATE(21),
    [sym_note_list] = STATE(21),
    [sym_command] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(10),
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
  [168] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_bar,
    ACTIONS(32), 1,
      anon_sym_assign,
    ACTIONS(34), 1,
      anon_sym_play,
    ACTIONS(36), 1,
      anon_sym_tempo,
    ACTIONS(38), 1,
      anon_sym_key,
    ACTIONS(40), 1,
      anon_sym_time,
    ACTIONS(42), 1,
      anon_sym_velocity,
    ACTIONS(44), 1,
      anon_sym_channel,
    ACTIONS(46), 1,
      anon_sym_voice,
    ACTIONS(48), 1,
      anon_sym_program,
    ACTIONS(50), 1,
      anon_sym_control,
    ACTIONS(52), 2,
      anon_sym_start,
      anon_sym_stop,
  [209] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(14), 1,
      aux_sym_decl_list_repeat1,
    STATE(17), 1,
      aux_sym_note_list_repeat1,
    STATE(45), 1,
      sym_decl_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(54), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(21), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [244] = 10,
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
    STATE(53), 1,
      sym_decl_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(56), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(21), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [279] = 10,
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
    STATE(52), 1,
      sym_decl_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(56), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    STATE(21), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [314] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_COLON,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym_decl_list_repeat1,
    STATE(17), 1,
      aux_sym_note_list_repeat1,
    ACTIONS(60), 2,
      sym_char,
      sym_rest,
    STATE(21), 3,
      sym_bar,
      sym_note_list,
      sym_command,
  [342] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
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
  [370] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
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
  [395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(73), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      sym_char,
      sym_rest,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(56), 2,
      anon_sym_SEMI,
      anon_sym_LF,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      sym_char,
      sym_rest,
      anon_sym_COLON,
      anon_sym_LBRACK,
  [431] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_note_list_repeat1,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
    ACTIONS(76), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACK,
  [450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      aux_sym_note_list_repeat1,
    ACTIONS(78), 2,
      sym_char,
      sym_rest,
    ACTIONS(26), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACK,
  [469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      aux_sym_note_list_repeat1,
    STATE(55), 1,
      sym_note_list,
    ACTIONS(7), 2,
      sym_char,
      sym_rest,
  [486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      aux_sym_uint_token1,
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(86), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(40), 1,
      sym_uint,
  [532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(41), 1,
      sym_uint,
  [542] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(22), 1,
      sym_uint,
  [552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(43), 1,
      sym_uint,
  [562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(38), 1,
      sym_uint,
  [604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(23), 1,
      sym_uint,
  [614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(35), 1,
      sym_uint,
  [656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(36), 1,
      sym_uint,
  [690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(31), 1,
      sym_uint,
  [700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      aux_sym_uint_token1,
    STATE(39), 1,
      sym_uint,
  [710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COLON,
  [717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_char,
  [724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_ident,
  [731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_ident,
  [738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_ident,
  [752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_end,
  [759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COLON,
  [766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_end,
  [780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
  [787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
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
  [SMALL_STATE(9)] = 209,
  [SMALL_STATE(10)] = 244,
  [SMALL_STATE(11)] = 279,
  [SMALL_STATE(12)] = 314,
  [SMALL_STATE(13)] = 342,
  [SMALL_STATE(14)] = 370,
  [SMALL_STATE(15)] = 395,
  [SMALL_STATE(16)] = 413,
  [SMALL_STATE(17)] = 431,
  [SMALL_STATE(18)] = 450,
  [SMALL_STATE(19)] = 469,
  [SMALL_STATE(20)] = 486,
  [SMALL_STATE(21)] = 495,
  [SMALL_STATE(22)] = 506,
  [SMALL_STATE(23)] = 514,
  [SMALL_STATE(24)] = 522,
  [SMALL_STATE(25)] = 532,
  [SMALL_STATE(26)] = 542,
  [SMALL_STATE(27)] = 552,
  [SMALL_STATE(28)] = 562,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 578,
  [SMALL_STATE(31)] = 586,
  [SMALL_STATE(32)] = 594,
  [SMALL_STATE(33)] = 604,
  [SMALL_STATE(34)] = 614,
  [SMALL_STATE(35)] = 622,
  [SMALL_STATE(36)] = 630,
  [SMALL_STATE(37)] = 638,
  [SMALL_STATE(38)] = 646,
  [SMALL_STATE(39)] = 656,
  [SMALL_STATE(40)] = 664,
  [SMALL_STATE(41)] = 672,
  [SMALL_STATE(42)] = 680,
  [SMALL_STATE(43)] = 690,
  [SMALL_STATE(44)] = 700,
  [SMALL_STATE(45)] = 710,
  [SMALL_STATE(46)] = 717,
  [SMALL_STATE(47)] = 724,
  [SMALL_STATE(48)] = 731,
  [SMALL_STATE(49)] = 738,
  [SMALL_STATE(50)] = 745,
  [SMALL_STATE(51)] = 752,
  [SMALL_STATE(52)] = 759,
  [SMALL_STATE(53)] = 766,
  [SMALL_STATE(54)] = 773,
  [SMALL_STATE(55)] = 780,
  [SMALL_STATE(56)] = 787,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_object_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_object_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 4, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_list_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_list, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_list, 1, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_list_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 8),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 7, 0, 12),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 6, 0, 11),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 10),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 9),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_balafon(void) {
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
