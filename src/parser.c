#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_func = 1,
  anon_sym_turbo = 2,
  anon_sym_EQ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_bool = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_return = 9,
  anon_sym_SEMI = 10,
  sym_identifier = 11,
  sym_number = 12,
  sym_source_file = 13,
  sym__definition = 14,
  sym_function_definition = 15,
  sym_varibale_definition = 16,
  sym_parameter_list = 17,
  sym_block = 18,
  sym__statement = 19,
  sym_return_statement = 20,
  sym__expression = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_block_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_func] = "func",
  [anon_sym_turbo] = "turbo",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_varibale_definition] = "varibale_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_turbo] = anon_sym_turbo,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_varibale_definition] = sym_varibale_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_turbo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_bool] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_varibale_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_turbo);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
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
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_turbo] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_varibale_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(5),
    [anon_sym_turbo] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_func,
    ACTIONS(14), 1,
      anon_sym_turbo,
    STATE(2), 4,
      sym__definition,
      sym_function_definition,
      sym_varibale_definition,
      aux_sym_source_file_repeat1,
  [16] = 4,
    ACTIONS(5), 1,
      anon_sym_func,
    ACTIONS(7), 1,
      anon_sym_turbo,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(2), 4,
      sym__definition,
      sym_function_definition,
      sym_varibale_definition,
      aux_sym_source_file_repeat1,
  [32] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_return,
    STATE(4), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [44] = 3,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      anon_sym_return,
    STATE(4), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [56] = 3,
    ACTIONS(26), 1,
      anon_sym_return,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(5), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [68] = 1,
    ACTIONS(30), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_turbo,
  [74] = 1,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_turbo,
  [80] = 1,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_turbo,
  [86] = 2,
    STATE(21), 1,
      sym__expression,
    ACTIONS(36), 2,
      sym_identifier,
      sym_number,
  [94] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_func,
      anon_sym_turbo,
  [100] = 2,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_block,
  [107] = 2,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_parameter_list,
  [114] = 1,
    ACTIONS(44), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [119] = 1,
    ACTIONS(46), 1,
      anon_sym_EQ,
  [123] = 1,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
  [127] = 1,
    ACTIONS(50), 1,
      sym_number,
  [131] = 1,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
  [135] = 1,
    ACTIONS(54), 1,
      sym_identifier,
  [139] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
  [143] = 1,
    ACTIONS(58), 1,
      anon_sym_SEMI,
  [147] = 1,
    ACTIONS(60), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 74,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 86,
  [SMALL_STATE(11)] = 94,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 107,
  [SMALL_STATE(14)] = 114,
  [SMALL_STATE(15)] = 119,
  [SMALL_STATE(16)] = 123,
  [SMALL_STATE(17)] = 127,
  [SMALL_STATE(18)] = 131,
  [SMALL_STATE(19)] = 135,
  [SMALL_STATE(20)] = 139,
  [SMALL_STATE(21)] = 143,
  [SMALL_STATE(22)] = 147,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varibale_definition, 4),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_turboscript(void) {
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
