#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_EQ = 1,
  anon_sym_PLUS_EQ = 2,
  anon_sym_SEMI = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COMMA = 8,
  sym__quoted_string = 9,
  sym__non_quoted_string = 10,
  sym_comment = 11,
  sym_source_file = 12,
  sym_pair = 13,
  sym__value = 14,
  sym_dictionary = 15,
  sym_list = 16,
  sym__elements = 17,
  sym_string = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym__elements_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym__quoted_string] = "_quoted_string",
  [sym__non_quoted_string] = "_non_quoted_string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_pair] = "pair",
  [sym__value] = "_value",
  [sym_dictionary] = "dictionary",
  [sym_list] = "list",
  [sym__elements] = "_elements",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__elements_repeat1] = "_elements_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__quoted_string] = sym__quoted_string,
  [sym__non_quoted_string] = sym__non_quoted_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_pair] = sym_pair,
  [sym__value] = sym__value,
  [sym_dictionary] = sym_dictionary,
  [sym_list] = sym_list,
  [sym__elements] = sym__elements,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__elements_repeat1] = aux_sym__elements_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__non_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__elements] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__elements_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_assignment = 1,
  field_key = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assignment] = "assignment",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_assignment, 1},
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__quoted_string_character_set_1(int32_t c) {
  return (c < '+'
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < '('
        ? c == '#'
        : c <= ')')))
    : (c <= ',' || (c < '{'
      ? (c < '='
        ? c == ';'
        : c <= '=')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__non_quoted_string_character_set_1(int32_t c) {
  return (c < '('
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '#'
        ? c == ' '
        : c <= '#')))
    : (c <= ')' || (c < '='
      ? (c < ';'
        ? (c >= '+' && c <= ',')
        : c <= ';')
      : (c <= '=' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(23);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__quoted_string);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__quoted_string);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(21);
      if (sym__quoted_string_character_set_1(lookahead)) ADVANCE(1);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__quoted_string);
      if (lookahead == '\\') ADVANCE(24);
      if (!sym__non_quoted_string_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__non_quoted_string);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(22);
      if (!sym__non_quoted_string_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__non_quoted_string);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(21);
      if (sym__quoted_string_character_set_1(lookahead)) ADVANCE(1);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__non_quoted_string);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__non_quoted_string);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__non_quoted_string);
      if (lookahead == '\\') ADVANCE(24);
      if (!sym__non_quoted_string_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__non_quoted_string);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_pair] = STATE(8),
    [sym_string] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__quoted_string] = ACTIONS(7),
    [sym__non_quoted_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym__value] = STATE(15),
    [sym_dictionary] = STATE(15),
    [sym_list] = STATE(15),
    [sym__elements] = STATE(23),
    [sym_string] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym__quoted_string] = ACTIONS(7),
    [sym__non_quoted_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(7), 2,
      sym__quoted_string,
      sym__non_quoted_string,
    STATE(21), 4,
      sym__value,
      sym_dictionary,
      sym_list,
      sym_string,
  [23] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(7), 2,
      sym__quoted_string,
      sym__non_quoted_string,
    STATE(21), 4,
      sym__value,
      sym_dictionary,
      sym_list,
      sym_string,
  [46] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym__quoted_string,
      sym__non_quoted_string,
    STATE(22), 4,
      sym__value,
      sym_dictionary,
      sym_list,
      sym_string,
  [66] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 2,
      sym__quoted_string,
      sym__non_quoted_string,
    STATE(21), 4,
      sym__value,
      sym_dictionary,
      sym_list,
      sym_string,
  [86] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_string,
    ACTIONS(25), 2,
      sym__quoted_string,
      sym__non_quoted_string,
    STATE(7), 2,
      sym_pair,
      aux_sym_source_file_repeat1,
  [107] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_string,
    ACTIONS(7), 2,
      sym__quoted_string,
      sym__non_quoted_string,
    STATE(7), 2,
      sym_pair,
      aux_sym_source_file_repeat1,
  [125] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_string,
    ACTIONS(7), 2,
      sym__quoted_string,
      sym__non_quoted_string,
    STATE(10), 2,
      sym_pair,
      aux_sym_source_file_repeat1,
  [143] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_string,
    ACTIONS(7), 2,
      sym__quoted_string,
      sym__non_quoted_string,
    STATE(7), 2,
      sym_pair,
      aux_sym_source_file_repeat1,
  [161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [172] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 3,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym__non_quoted_string,
  [184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym__elements_repeat1,
  [215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym__elements_repeat1,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym__elements_repeat1,
  [259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SEMI,
  [282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
  [289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 23,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 143,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 193,
  [SMALL_STATE(15)] = 202,
  [SMALL_STATE(16)] = 215,
  [SMALL_STATE(17)] = 224,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 259,
  [SMALL_STATE(21)] = 267,
  [SMALL_STATE(22)] = 275,
  [SMALL_STATE(23)] = 282,
  [SMALL_STATE(24)] = 289,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__elements, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__elements, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__elements, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__elements, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__elements_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__elements_repeat1, 2), SHIFT_REPEAT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_brazil_config(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
