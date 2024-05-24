#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_value = 1,
  sym_expression_value = 2,
  sym_equals = 3,
  sym_segment_separator = 4,
  sym_single_quote = 5,
  sym_double_quote = 6,
  sym_whitespace = 7,
  sym_open_curl = 8,
  sym_close_curl = 9,
  sym_open_bracket = 10,
  sym_close_bracket = 11,
  sym_back_tick = 12,
  sym_pathNode = 13,
  sym_segment = 14,
  sym_modelRef = 15,
  sym_query = 16,
  sym_expression = 17,
  aux_sym_pathNode_repeat1 = 18,
  aux_sym_segment_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_value] = "value",
  [sym_expression_value] = "expression_value",
  [sym_equals] = "equals",
  [sym_segment_separator] = "segment_separator",
  [sym_single_quote] = "single_quote",
  [sym_double_quote] = "double_quote",
  [sym_whitespace] = "whitespace",
  [sym_open_curl] = "open_curl",
  [sym_close_curl] = "close_curl",
  [sym_open_bracket] = "open_bracket",
  [sym_close_bracket] = "close_bracket",
  [sym_back_tick] = "back_tick",
  [sym_pathNode] = "pathNode",
  [sym_segment] = "segment",
  [sym_modelRef] = "modelRef",
  [sym_query] = "query",
  [sym_expression] = "expression",
  [aux_sym_pathNode_repeat1] = "pathNode_repeat1",
  [aux_sym_segment_repeat1] = "segment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_value] = sym_value,
  [sym_expression_value] = sym_expression_value,
  [sym_equals] = sym_equals,
  [sym_segment_separator] = sym_segment_separator,
  [sym_single_quote] = sym_single_quote,
  [sym_double_quote] = sym_double_quote,
  [sym_whitespace] = sym_whitespace,
  [sym_open_curl] = sym_open_curl,
  [sym_close_curl] = sym_close_curl,
  [sym_open_bracket] = sym_open_bracket,
  [sym_close_bracket] = sym_close_bracket,
  [sym_back_tick] = sym_back_tick,
  [sym_pathNode] = sym_pathNode,
  [sym_segment] = sym_segment,
  [sym_modelRef] = sym_modelRef,
  [sym_query] = sym_query,
  [sym_expression] = sym_expression,
  [aux_sym_pathNode_repeat1] = aux_sym_pathNode_repeat1,
  [aux_sym_segment_repeat1] = aux_sym_segment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_equals] = {
    .visible = true,
    .named = true,
  },
  [sym_segment_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_open_curl] = {
    .visible = true,
    .named = true,
  },
  [sym_close_curl] = {
    .visible = true,
    .named = true,
  },
  [sym_open_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_close_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_back_tick] = {
    .visible = true,
    .named = true,
  },
  [sym_pathNode] = {
    .visible = true,
    .named = true,
  },
  [sym_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_modelRef] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pathNode_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_segment_repeat1] = {
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
  [4] = 2,
  [5] = 3,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      ADVANCE_MAP(
        ' ', 9,
        '"', 8,
        '\'', 7,
        '.', 6,
        '=', 5,
        '[', 13,
        ']', 14,
        '`', 15,
        '{', 11,
        '}', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_expression_value);
      if (lookahead == ' ') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_expression_value);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_equals);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_segment_separator);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_single_quote);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_double_quote);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == ' ') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_open_curl);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_close_curl);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_open_bracket);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_close_bracket);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_back_tick);
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
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_value] = ACTIONS(1),
    [sym_equals] = ACTIONS(1),
    [sym_segment_separator] = ACTIONS(1),
    [sym_single_quote] = ACTIONS(1),
    [sym_double_quote] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(1),
    [sym_close_curl] = ACTIONS(1),
    [sym_open_bracket] = ACTIONS(1),
    [sym_close_bracket] = ACTIONS(1),
    [sym_back_tick] = ACTIONS(1),
  },
  [1] = {
    [sym_pathNode] = STATE(33),
    [sym_segment] = STATE(19),
    [sym_modelRef] = STATE(2),
    [sym_query] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_value] = ACTIONS(5),
    [sym_single_quote] = ACTIONS(7),
    [sym_double_quote] = ACTIONS(9),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(11),
    [sym_open_bracket] = ACTIONS(13),
    [sym_back_tick] = ACTIONS(15),
  },
  [2] = {
    [sym_segment] = STATE(5),
    [sym_modelRef] = STATE(4),
    [sym_query] = STATE(4),
    [sym_expression] = STATE(4),
    [aux_sym_segment_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_value] = ACTIONS(19),
    [sym_equals] = ACTIONS(21),
    [sym_segment_separator] = ACTIONS(21),
    [sym_single_quote] = ACTIONS(7),
    [sym_double_quote] = ACTIONS(9),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(11),
    [sym_close_curl] = ACTIONS(21),
    [sym_open_bracket] = ACTIONS(13),
    [sym_close_bracket] = ACTIONS(21),
    [sym_back_tick] = ACTIONS(15),
  },
  [3] = {
    [sym_segment] = STATE(6),
    [sym_modelRef] = STATE(4),
    [sym_query] = STATE(4),
    [sym_expression] = STATE(4),
    [aux_sym_segment_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_value] = ACTIONS(25),
    [sym_equals] = ACTIONS(25),
    [sym_segment_separator] = ACTIONS(25),
    [sym_single_quote] = ACTIONS(25),
    [sym_double_quote] = ACTIONS(25),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(25),
    [sym_close_curl] = ACTIONS(25),
    [sym_open_bracket] = ACTIONS(25),
    [sym_close_bracket] = ACTIONS(25),
    [sym_back_tick] = ACTIONS(25),
  },
  [4] = {
    [sym_segment] = STATE(3),
    [sym_modelRef] = STATE(4),
    [sym_query] = STATE(4),
    [sym_expression] = STATE(4),
    [aux_sym_segment_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_value] = ACTIONS(21),
    [sym_equals] = ACTIONS(21),
    [sym_segment_separator] = ACTIONS(21),
    [sym_single_quote] = ACTIONS(21),
    [sym_double_quote] = ACTIONS(21),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(21),
    [sym_close_curl] = ACTIONS(21),
    [sym_open_bracket] = ACTIONS(21),
    [sym_close_bracket] = ACTIONS(21),
    [sym_back_tick] = ACTIONS(21),
  },
  [5] = {
    [sym_segment] = STATE(6),
    [sym_modelRef] = STATE(4),
    [sym_query] = STATE(4),
    [sym_expression] = STATE(4),
    [aux_sym_segment_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_value] = ACTIONS(19),
    [sym_equals] = ACTIONS(25),
    [sym_segment_separator] = ACTIONS(25),
    [sym_single_quote] = ACTIONS(7),
    [sym_double_quote] = ACTIONS(9),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(11),
    [sym_close_curl] = ACTIONS(25),
    [sym_open_bracket] = ACTIONS(13),
    [sym_close_bracket] = ACTIONS(25),
    [sym_back_tick] = ACTIONS(15),
  },
  [6] = {
    [sym_segment] = STATE(6),
    [sym_modelRef] = STATE(4),
    [sym_query] = STATE(4),
    [sym_expression] = STATE(4),
    [aux_sym_segment_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_value] = ACTIONS(29),
    [sym_equals] = ACTIONS(32),
    [sym_segment_separator] = ACTIONS(32),
    [sym_single_quote] = ACTIONS(34),
    [sym_double_quote] = ACTIONS(37),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(40),
    [sym_close_curl] = ACTIONS(32),
    [sym_open_bracket] = ACTIONS(43),
    [sym_close_bracket] = ACTIONS(32),
    [sym_back_tick] = ACTIONS(46),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_value] = ACTIONS(51),
    [sym_equals] = ACTIONS(51),
    [sym_segment_separator] = ACTIONS(51),
    [sym_single_quote] = ACTIONS(51),
    [sym_double_quote] = ACTIONS(51),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(51),
    [sym_close_curl] = ACTIONS(51),
    [sym_open_bracket] = ACTIONS(51),
    [sym_close_bracket] = ACTIONS(51),
    [sym_back_tick] = ACTIONS(51),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_value] = ACTIONS(55),
    [sym_equals] = ACTIONS(55),
    [sym_segment_separator] = ACTIONS(55),
    [sym_single_quote] = ACTIONS(55),
    [sym_double_quote] = ACTIONS(55),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(55),
    [sym_close_curl] = ACTIONS(55),
    [sym_open_bracket] = ACTIONS(55),
    [sym_close_bracket] = ACTIONS(55),
    [sym_back_tick] = ACTIONS(55),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_value] = ACTIONS(59),
    [sym_equals] = ACTIONS(59),
    [sym_segment_separator] = ACTIONS(59),
    [sym_single_quote] = ACTIONS(59),
    [sym_double_quote] = ACTIONS(59),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(59),
    [sym_close_curl] = ACTIONS(59),
    [sym_open_bracket] = ACTIONS(59),
    [sym_close_bracket] = ACTIONS(59),
    [sym_back_tick] = ACTIONS(59),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_value] = ACTIONS(63),
    [sym_equals] = ACTIONS(63),
    [sym_segment_separator] = ACTIONS(63),
    [sym_single_quote] = ACTIONS(63),
    [sym_double_quote] = ACTIONS(63),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(63),
    [sym_close_curl] = ACTIONS(63),
    [sym_open_bracket] = ACTIONS(63),
    [sym_close_bracket] = ACTIONS(63),
    [sym_back_tick] = ACTIONS(63),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_value] = ACTIONS(67),
    [sym_equals] = ACTIONS(67),
    [sym_segment_separator] = ACTIONS(67),
    [sym_single_quote] = ACTIONS(67),
    [sym_double_quote] = ACTIONS(67),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(67),
    [sym_close_curl] = ACTIONS(67),
    [sym_open_bracket] = ACTIONS(67),
    [sym_close_bracket] = ACTIONS(67),
    [sym_back_tick] = ACTIONS(67),
  },
  [12] = {
    [sym_pathNode] = STATE(23),
    [sym_segment] = STATE(19),
    [sym_modelRef] = STATE(2),
    [sym_query] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_value] = ACTIONS(5),
    [sym_single_quote] = ACTIONS(7),
    [sym_double_quote] = ACTIONS(9),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(11),
    [sym_open_bracket] = ACTIONS(13),
    [sym_back_tick] = ACTIONS(15),
  },
  [13] = {
    [sym_segment] = STATE(30),
    [sym_modelRef] = STATE(2),
    [sym_query] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_value] = ACTIONS(5),
    [sym_equals] = ACTIONS(69),
    [sym_single_quote] = ACTIONS(7),
    [sym_double_quote] = ACTIONS(9),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(11),
    [sym_open_bracket] = ACTIONS(13),
    [sym_back_tick] = ACTIONS(15),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_value] = ACTIONS(73),
    [sym_equals] = ACTIONS(73),
    [sym_segment_separator] = ACTIONS(73),
    [sym_single_quote] = ACTIONS(73),
    [sym_double_quote] = ACTIONS(73),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(73),
    [sym_close_curl] = ACTIONS(73),
    [sym_open_bracket] = ACTIONS(73),
    [sym_close_bracket] = ACTIONS(73),
    [sym_back_tick] = ACTIONS(73),
  },
  [15] = {
    [sym_segment] = STATE(27),
    [sym_modelRef] = STATE(2),
    [sym_query] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_value] = ACTIONS(5),
    [sym_equals] = ACTIONS(75),
    [sym_single_quote] = ACTIONS(7),
    [sym_double_quote] = ACTIONS(9),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(11),
    [sym_open_bracket] = ACTIONS(13),
    [sym_back_tick] = ACTIONS(15),
  },
  [16] = {
    [sym_segment] = STATE(28),
    [sym_modelRef] = STATE(2),
    [sym_query] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_value] = ACTIONS(5),
    [sym_single_quote] = ACTIONS(7),
    [sym_double_quote] = ACTIONS(9),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(11),
    [sym_open_bracket] = ACTIONS(13),
    [sym_back_tick] = ACTIONS(15),
  },
  [17] = {
    [sym_segment] = STATE(32),
    [sym_modelRef] = STATE(2),
    [sym_query] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_value] = ACTIONS(5),
    [sym_single_quote] = ACTIONS(7),
    [sym_double_quote] = ACTIONS(9),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(11),
    [sym_open_bracket] = ACTIONS(13),
    [sym_back_tick] = ACTIONS(15),
  },
  [18] = {
    [sym_segment] = STATE(22),
    [sym_modelRef] = STATE(2),
    [sym_query] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_value] = ACTIONS(5),
    [sym_single_quote] = ACTIONS(7),
    [sym_double_quote] = ACTIONS(9),
    [sym_whitespace] = ACTIONS(3),
    [sym_open_curl] = ACTIONS(11),
    [sym_open_bracket] = ACTIONS(13),
    [sym_back_tick] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_segment_separator,
    ACTIONS(81), 1,
      sym_close_curl,
    STATE(20), 1,
      aux_sym_pathNode_repeat1,
  [16] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(79), 1,
      sym_segment_separator,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      sym_close_curl,
    STATE(21), 1,
      aux_sym_pathNode_repeat1,
  [32] = 5,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym_segment_separator,
    ACTIONS(92), 1,
      sym_close_curl,
    STATE(21), 1,
      aux_sym_pathNode_repeat1,
  [48] = 3,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 2,
      sym_segment_separator,
      sym_close_curl,
  [59] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(94), 1,
      sym_close_curl,
  [66] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(96), 1,
      sym_value,
  [73] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(98), 1,
      sym_close_curl,
  [80] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(100), 1,
      sym_back_tick,
  [87] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(102), 1,
      sym_close_bracket,
  [94] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(104), 1,
      sym_equals,
  [101] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(106), 1,
      sym_double_quote,
  [108] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(108), 1,
      sym_close_bracket,
  [115] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(106), 1,
      sym_single_quote,
  [122] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(110), 1,
      sym_close_bracket,
  [129] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [136] = 2,
    ACTIONS(114), 1,
      sym_expression_value,
    ACTIONS(116), 1,
      sym_whitespace,
  [143] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(118), 1,
      sym_open_curl,
  [150] = 2,
    ACTIONS(3), 1,
      sym_whitespace,
    ACTIONS(120), 1,
      sym_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 16,
  [SMALL_STATE(21)] = 32,
  [SMALL_STATE(22)] = 48,
  [SMALL_STATE(23)] = 59,
  [SMALL_STATE(24)] = 66,
  [SMALL_STATE(25)] = 73,
  [SMALL_STATE(26)] = 80,
  [SMALL_STATE(27)] = 87,
  [SMALL_STATE(28)] = 94,
  [SMALL_STATE(29)] = 101,
  [SMALL_STATE(30)] = 108,
  [SMALL_STATE(31)] = 115,
  [SMALL_STATE(32)] = 122,
  [SMALL_STATE(33)] = 129,
  [SMALL_STATE(34)] = 136,
  [SMALL_STATE(35)] = 143,
  [SMALL_STATE(36)] = 150,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 7, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 7, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 6, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 5, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modelRef, 5, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modelRef, 5, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathNode, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pathNode, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathNode, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pathNode, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathNode_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pathNode_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pathNode_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
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

TS_PUBLIC const TSLanguage *tree_sitter_player_bindings(void) {
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
