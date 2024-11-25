#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_segment_header = 1,
  sym_element_separator = 2,
  sym_component_element_separator = 3,
  anon_sym_TILDE = 4,
  anon_sym_LF = 5,
  sym_numeric = 6,
  sym_alphanumeric = 7,
  sym_source_file = 8,
  sym_segment_separator = 9,
  sym_segment = 10,
  aux_sym_source_file_repeat1 = 11,
  aux_sym_segment_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_segment_header] = "segment_header",
  [sym_element_separator] = "element_separator",
  [sym_component_element_separator] = "component_element_separator",
  [anon_sym_TILDE] = "~",
  [anon_sym_LF] = "\n",
  [sym_numeric] = "numeric",
  [sym_alphanumeric] = "alphanumeric",
  [sym_source_file] = "source_file",
  [sym_segment_separator] = "segment_separator",
  [sym_segment] = "segment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_segment_repeat1] = "segment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_segment_header] = sym_segment_header,
  [sym_element_separator] = sym_element_separator,
  [sym_component_element_separator] = sym_component_element_separator,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LF] = anon_sym_LF,
  [sym_numeric] = sym_numeric,
  [sym_alphanumeric] = sym_alphanumeric,
  [sym_source_file] = sym_source_file,
  [sym_segment_separator] = sym_segment_separator,
  [sym_segment] = sym_segment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_segment_repeat1] = aux_sym_segment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_segment_header] = {
    .visible = true,
    .named = true,
  },
  [sym_element_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_component_element_separator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_alphanumeric] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_segment_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_segment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '~') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '>') ADVANCE(10);
      if (lookahead == '~') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '(' ||
          lookahead == ')' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '(' ||
          lookahead == ')' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(3);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_segment_header);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_segment_header);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(6);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_element_separator);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_component_element_separator);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_component_element_separator);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '(' ||
          lookahead == ')' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_numeric);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_numeric);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '(' ||
          lookahead == ')' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_alphanumeric);
      if (lookahead == '>') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '(' ||
          lookahead == ')' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_alphanumeric);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '(' ||
          lookahead == ')' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_alphanumeric);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          lookahead == '(' ||
          lookahead == ')' ||
          (',' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_segment_header] = ACTIONS(1),
    [sym_element_separator] = ACTIONS(1),
    [sym_component_element_separator] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_numeric] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_segment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_segment_header] = ACTIONS(5),
  },
  [2] = {
    [sym_segment_separator] = STATE(9),
    [aux_sym_segment_repeat1] = STATE(3),
    [sym_element_separator] = ACTIONS(7),
    [sym_component_element_separator] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(11),
    [sym_numeric] = ACTIONS(7),
    [sym_alphanumeric] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(3), 1,
      aux_sym_segment_repeat1,
    ACTIONS(16), 2,
      sym_component_element_separator,
      anon_sym_TILDE,
    ACTIONS(13), 3,
      sym_element_separator,
      sym_numeric,
      sym_alphanumeric,
  [13] = 3,
    ACTIONS(5), 1,
      sym_segment_header,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_segment,
      aux_sym_source_file_repeat1,
  [24] = 2,
    STATE(2), 1,
      aux_sym_segment_repeat1,
    ACTIONS(20), 3,
      sym_element_separator,
      sym_numeric,
      sym_alphanumeric,
  [33] = 3,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      sym_segment_header,
    STATE(6), 2,
      sym_segment,
      aux_sym_source_file_repeat1,
  [44] = 3,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_segment_header,
    ACTIONS(31), 1,
      anon_sym_LF,
  [54] = 2,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    STATE(10), 1,
      sym_segment_separator,
  [61] = 1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_segment_header,
  [66] = 1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_segment_header,
  [71] = 1,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_segment_header,
  [76] = 1,
    ACTIONS(41), 1,
      sym_element_separator,
  [80] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 13,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 44,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 61,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 71,
  [SMALL_STATE(12)] = 76,
  [SMALL_STATE(13)] = 80,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_segment_repeat1, 2, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment_separator, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_separator, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 4, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 5, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment_separator, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_x12(void) {
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
