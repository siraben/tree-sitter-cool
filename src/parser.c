#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_SEMI = 1,
  anon_sym_class = 2,
  anon_sym_inherits = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_COLON = 9,
  anon_sym_LT_DASH = 10,
  sym_id = 11,
  sym_type = 12,
  anon_sym_while = 13,
  anon_sym_loop = 14,
  anon_sym_pool = 15,
  anon_sym_case = 16,
  anon_sym_of = 17,
  anon_sym_formal = 18,
  anon_sym_EQ_GT = 19,
  anon_sym_l = 20,
  anon_sym_esac = 21,
  anon_sym_new = 22,
  anon_sym_TILDE = 23,
  anon_sym_isvoid = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_LT = 30,
  anon_sym_EQ = 31,
  anon_sym_not = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  anon_sym_let = 35,
  anon_sym_in = 36,
  anon_sym_AT = 37,
  anon_sym_DOT = 38,
  anon_sym_if = 39,
  anon_sym_then = 40,
  anon_sym_else = 41,
  anon_sym_fi = 42,
  sym_int = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_string_token1 = 45,
  sym_comment = 46,
  sym_program = 47,
  sym_classDefine = 48,
  sym_feature = 49,
  sym_method = 50,
  sym_property = 51,
  sym_formal = 52,
  sym_expression = 53,
  sym_dispatch = 54,
  sym_functionCall = 55,
  sym_if = 56,
  sym_string = 57,
  aux_sym_program_repeat1 = 58,
  aux_sym_classDefine_repeat1 = 59,
  aux_sym_method_repeat1 = 60,
  aux_sym_expression_repeat1 = 61,
  aux_sym_expression_repeat2 = 62,
  aux_sym_expression_repeat3 = 63,
  aux_sym_dispatch_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_class] = "class",
  [anon_sym_inherits] = "inherits",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_LT_DASH] = "<-",
  [sym_id] = "id",
  [sym_type] = "type",
  [anon_sym_while] = "while",
  [anon_sym_loop] = "loop",
  [anon_sym_pool] = "pool",
  [anon_sym_case] = "case",
  [anon_sym_of] = "of",
  [anon_sym_formal] = "formal",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_l] = "l",
  [anon_sym_esac] = "esac",
  [anon_sym_new] = "new",
  [anon_sym_TILDE] = "~",
  [anon_sym_isvoid] = "isvoid",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_not] = "not",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_AT] = "@",
  [anon_sym_DOT] = ".",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_fi] = "fi",
  [sym_int] = "int",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_classDefine] = "classDefine",
  [sym_feature] = "feature",
  [sym_method] = "method",
  [sym_property] = "property",
  [sym_formal] = "formal",
  [sym_expression] = "expression",
  [sym_dispatch] = "dispatch",
  [sym_functionCall] = "functionCall",
  [sym_if] = "if",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_classDefine_repeat1] = "classDefine_repeat1",
  [aux_sym_method_repeat1] = "method_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expression_repeat2] = "expression_repeat2",
  [aux_sym_expression_repeat3] = "expression_repeat3",
  [aux_sym_dispatch_repeat1] = "dispatch_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_inherits] = anon_sym_inherits,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [sym_id] = sym_id,
  [sym_type] = sym_type,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_pool] = anon_sym_pool,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_formal] = anon_sym_formal,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_esac] = anon_sym_esac,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_isvoid] = anon_sym_isvoid,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_fi] = anon_sym_fi,
  [sym_int] = sym_int,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym_classDefine] = sym_classDefine,
  [sym_feature] = sym_feature,
  [sym_method] = sym_method,
  [sym_property] = sym_property,
  [sym_formal] = sym_formal,
  [sym_expression] = sym_expression,
  [sym_dispatch] = sym_dispatch,
  [sym_functionCall] = sym_functionCall,
  [sym_if] = sym_if,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_classDefine_repeat1] = aux_sym_classDefine_repeat1,
  [aux_sym_method_repeat1] = aux_sym_method_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_expression_repeat2] = aux_sym_expression_repeat2,
  [aux_sym_expression_repeat3] = aux_sym_expression_repeat3,
  [aux_sym_dispatch_repeat1] = aux_sym_dispatch_repeat1,
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
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inherits] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_formal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isvoid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fi] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_classDefine] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_formal] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dispatch] = {
    .visible = true,
    .named = true,
  },
  [sym_functionCall] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_classDefine_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dispatch_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '~') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(90);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '~') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 66:
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 67:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_inherits);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'h') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'w') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_pool);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_formal);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_esac);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_new);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_isvoid);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_isvoid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(160);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 154},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_pool] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_formal] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_esac] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_isvoid] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_fi] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(134),
    [sym_classDefine] = STATE(132),
    [aux_sym_program_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LT_DASH,
    ACTIONS(15), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(9), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [35] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_id,
    ACTIONS(28), 1,
      anon_sym_while,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(34), 1,
      anon_sym_new,
    ACTIONS(37), 1,
      anon_sym_TILDE,
    ACTIONS(46), 1,
      anon_sym_let,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(52), 1,
      sym_int,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      aux_sym_expression_repeat1,
    STATE(61), 1,
      sym_expression,
    ACTIONS(40), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [95] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      aux_sym_expression_repeat1,
    STATE(61), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(86), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [184] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_l,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(90), 13,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(102), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(106), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(110), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(114), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [339] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(116), 2,
      anon_sym_l,
      anon_sym_LT,
    ACTIONS(114), 15,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(118), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [403] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [460] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(116), 2,
      anon_sym_l,
      anon_sym_LT,
    ACTIONS(114), 17,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(124), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [522] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(130), 1,
      anon_sym_l,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(128), 13,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(132), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [590] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(116), 1,
      anon_sym_l,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(114), 13,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(90), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [658] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(138), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(142), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(146), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [802] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [859] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      aux_sym_expression_repeat1,
    STATE(61), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(9), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [945] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(154), 1,
      anon_sym_l,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(152), 13,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(156), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [1013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_l,
      anon_sym_DASH,
      anon_sym_LT,
    ACTIONS(152), 18,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_loop,
      anon_sym_pool,
      anon_sym_of,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
  [1042] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1096] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1150] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1204] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1258] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1312] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1366] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1420] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1474] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1528] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1582] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1636] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1690] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1744] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1798] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1852] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1906] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [1960] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [2014] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_id,
    ACTIONS(66), 1,
      anon_sym_while,
    ACTIONS(68), 1,
      anon_sym_case,
    ACTIONS(70), 1,
      anon_sym_new,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(78), 1,
      anon_sym_let,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(82), 1,
      sym_int,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_expression,
    ACTIONS(74), 2,
      anon_sym_isvoid,
      anon_sym_not,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym_dispatch,
      sym_functionCall,
      sym_if,
      sym_string,
  [2068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_int,
      anon_sym_DQUOTE,
    ACTIONS(160), 11,
      anon_sym_LPAREN,
      sym_id,
      anon_sym_while,
      anon_sym_case,
      anon_sym_new,
      anon_sym_isvoid,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_if,
  [2092] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_in,
  [2124] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_dispatch_repeat1,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2160] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_dispatch_repeat1,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2196] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_dispatch_repeat1,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2232] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2263] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2293] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_loop,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2323] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      anon_sym_of,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2353] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2383] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2413] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(186), 1,
      anon_sym_then,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2443] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2473] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_pool,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2503] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2533] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(194), 1,
      anon_sym_else,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2563] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(196), 1,
      anon_sym_l,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2593] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_AT,
    ACTIONS(166), 1,
      anon_sym_DOT,
    ACTIONS(198), 1,
      anon_sym_fi,
    ACTIONS(13), 2,
      anon_sym_LT_EQ,
      anon_sym_EQ,
    ACTIONS(94), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2623] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym_id,
    STATE(68), 1,
      aux_sym_classDefine_repeat1,
    STATE(75), 1,
      sym_formal,
    STATE(121), 1,
      sym_feature,
    STATE(120), 2,
      sym_method,
      sym_property,
  [2646] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_classDefine_repeat1,
    STATE(75), 1,
      sym_formal,
    STATE(121), 1,
      sym_feature,
    STATE(120), 2,
      sym_method,
      sym_property,
  [2669] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_classDefine_repeat1,
    STATE(75), 1,
      sym_formal,
    STATE(121), 1,
      sym_feature,
    STATE(120), 2,
      sym_method,
      sym_property,
  [2692] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 1,
      sym_id,
    STATE(70), 1,
      aux_sym_classDefine_repeat1,
    STATE(75), 1,
      sym_formal,
    STATE(121), 1,
      sym_feature,
    STATE(120), 2,
      sym_method,
      sym_property,
  [2715] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_id,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_classDefine_repeat1,
    STATE(75), 1,
      sym_formal,
    STATE(121), 1,
      sym_feature,
    STATE(120), 2,
      sym_method,
      sym_property,
  [2738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LT_DASH,
      anon_sym_in,
  [2749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_class,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      aux_sym_program_repeat1,
    STATE(132), 1,
      sym_classDefine,
  [2765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_class,
    STATE(74), 1,
      aux_sym_program_repeat1,
    STATE(132), 1,
      sym_classDefine,
  [2781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LT_DASH,
    ACTIONS(224), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_in,
  [2793] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_in,
    ACTIONS(228), 1,
      sym_id,
    STATE(75), 1,
      sym_formal,
    STATE(83), 1,
      sym_property,
  [2809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_in,
    STATE(77), 1,
      aux_sym_expression_repeat3,
  [2822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_method_repeat1,
  [2835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_in,
    STATE(77), 1,
      aux_sym_expression_repeat3,
  [2848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_method_repeat1,
  [2861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_id,
    STATE(75), 1,
      sym_formal,
    STATE(95), 1,
      sym_property,
  [2874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_dispatch_repeat1,
  [2887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_in,
    STATE(79), 1,
      aux_sym_expression_repeat3,
  [2900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_dispatch_repeat1,
  [2913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_esac,
    ACTIONS(254), 1,
      anon_sym_formal,
    STATE(89), 1,
      aux_sym_expression_repeat2,
  [2926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_dispatch_repeat1,
  [2939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_method_repeat1,
  [2952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_id,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      sym_formal,
  [2965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_formal,
    ACTIONS(268), 1,
      anon_sym_esac,
    STATE(89), 1,
      aux_sym_expression_repeat2,
  [2978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_dispatch_repeat1,
  [2991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_RBRACE,
      sym_id,
  [2999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [3017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_formal,
      anon_sym_esac,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_in,
  [3033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [3041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_id,
    STATE(92), 1,
      sym_formal,
  [3051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_inherits,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
  [3061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_formal,
    STATE(85), 1,
      aux_sym_expression_repeat2,
  [3071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_SEMI,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_id,
  [3085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_id,
  [3099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [3106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_type,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
  [3120] = 2,
    ACTIONS(296), 1,
      aux_sym_string_token1,
    ACTIONS(298), 1,
      sym_comment,
  [3127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_type,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_type,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_EQ_GT,
  [3148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [3155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_COLON,
  [3162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
  [3169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_SEMI,
  [3176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_SEMI,
  [3183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SEMI,
  [3190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_type,
  [3197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_type,
  [3204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
  [3211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SEMI,
  [3218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_SEMI,
  [3225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_type,
  [3232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
  [3239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_SEMI,
  [3246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SEMI,
  [3253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_type,
  [3260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
  [3267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_type,
  [3274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
  [3281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DOT,
  [3288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
  [3295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SEMI,
  [3302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COLON,
  [3309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 95,
  [SMALL_STATE(5)] = 155,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 281,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 339,
  [SMALL_STATE(12)] = 374,
  [SMALL_STATE(13)] = 403,
  [SMALL_STATE(14)] = 460,
  [SMALL_STATE(15)] = 493,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 561,
  [SMALL_STATE(18)] = 590,
  [SMALL_STATE(19)] = 629,
  [SMALL_STATE(20)] = 658,
  [SMALL_STATE(21)] = 715,
  [SMALL_STATE(22)] = 744,
  [SMALL_STATE(23)] = 773,
  [SMALL_STATE(24)] = 802,
  [SMALL_STATE(25)] = 859,
  [SMALL_STATE(26)] = 916,
  [SMALL_STATE(27)] = 945,
  [SMALL_STATE(28)] = 984,
  [SMALL_STATE(29)] = 1013,
  [SMALL_STATE(30)] = 1042,
  [SMALL_STATE(31)] = 1096,
  [SMALL_STATE(32)] = 1150,
  [SMALL_STATE(33)] = 1204,
  [SMALL_STATE(34)] = 1258,
  [SMALL_STATE(35)] = 1312,
  [SMALL_STATE(36)] = 1366,
  [SMALL_STATE(37)] = 1420,
  [SMALL_STATE(38)] = 1474,
  [SMALL_STATE(39)] = 1528,
  [SMALL_STATE(40)] = 1582,
  [SMALL_STATE(41)] = 1636,
  [SMALL_STATE(42)] = 1690,
  [SMALL_STATE(43)] = 1744,
  [SMALL_STATE(44)] = 1798,
  [SMALL_STATE(45)] = 1852,
  [SMALL_STATE(46)] = 1906,
  [SMALL_STATE(47)] = 1960,
  [SMALL_STATE(48)] = 2014,
  [SMALL_STATE(49)] = 2068,
  [SMALL_STATE(50)] = 2092,
  [SMALL_STATE(51)] = 2124,
  [SMALL_STATE(52)] = 2160,
  [SMALL_STATE(53)] = 2196,
  [SMALL_STATE(54)] = 2232,
  [SMALL_STATE(55)] = 2263,
  [SMALL_STATE(56)] = 2293,
  [SMALL_STATE(57)] = 2323,
  [SMALL_STATE(58)] = 2353,
  [SMALL_STATE(59)] = 2383,
  [SMALL_STATE(60)] = 2413,
  [SMALL_STATE(61)] = 2443,
  [SMALL_STATE(62)] = 2473,
  [SMALL_STATE(63)] = 2503,
  [SMALL_STATE(64)] = 2533,
  [SMALL_STATE(65)] = 2563,
  [SMALL_STATE(66)] = 2593,
  [SMALL_STATE(67)] = 2623,
  [SMALL_STATE(68)] = 2646,
  [SMALL_STATE(69)] = 2669,
  [SMALL_STATE(70)] = 2692,
  [SMALL_STATE(71)] = 2715,
  [SMALL_STATE(72)] = 2738,
  [SMALL_STATE(73)] = 2749,
  [SMALL_STATE(74)] = 2765,
  [SMALL_STATE(75)] = 2781,
  [SMALL_STATE(76)] = 2793,
  [SMALL_STATE(77)] = 2809,
  [SMALL_STATE(78)] = 2822,
  [SMALL_STATE(79)] = 2835,
  [SMALL_STATE(80)] = 2848,
  [SMALL_STATE(81)] = 2861,
  [SMALL_STATE(82)] = 2874,
  [SMALL_STATE(83)] = 2887,
  [SMALL_STATE(84)] = 2900,
  [SMALL_STATE(85)] = 2913,
  [SMALL_STATE(86)] = 2926,
  [SMALL_STATE(87)] = 2939,
  [SMALL_STATE(88)] = 2952,
  [SMALL_STATE(89)] = 2965,
  [SMALL_STATE(90)] = 2978,
  [SMALL_STATE(91)] = 2991,
  [SMALL_STATE(92)] = 2999,
  [SMALL_STATE(93)] = 3007,
  [SMALL_STATE(94)] = 3017,
  [SMALL_STATE(95)] = 3025,
  [SMALL_STATE(96)] = 3033,
  [SMALL_STATE(97)] = 3041,
  [SMALL_STATE(98)] = 3051,
  [SMALL_STATE(99)] = 3061,
  [SMALL_STATE(100)] = 3071,
  [SMALL_STATE(101)] = 3078,
  [SMALL_STATE(102)] = 3085,
  [SMALL_STATE(103)] = 3092,
  [SMALL_STATE(104)] = 3099,
  [SMALL_STATE(105)] = 3106,
  [SMALL_STATE(106)] = 3113,
  [SMALL_STATE(107)] = 3120,
  [SMALL_STATE(108)] = 3127,
  [SMALL_STATE(109)] = 3134,
  [SMALL_STATE(110)] = 3141,
  [SMALL_STATE(111)] = 3148,
  [SMALL_STATE(112)] = 3155,
  [SMALL_STATE(113)] = 3162,
  [SMALL_STATE(114)] = 3169,
  [SMALL_STATE(115)] = 3176,
  [SMALL_STATE(116)] = 3183,
  [SMALL_STATE(117)] = 3190,
  [SMALL_STATE(118)] = 3197,
  [SMALL_STATE(119)] = 3204,
  [SMALL_STATE(120)] = 3211,
  [SMALL_STATE(121)] = 3218,
  [SMALL_STATE(122)] = 3225,
  [SMALL_STATE(123)] = 3232,
  [SMALL_STATE(124)] = 3239,
  [SMALL_STATE(125)] = 3246,
  [SMALL_STATE(126)] = 3253,
  [SMALL_STATE(127)] = 3260,
  [SMALL_STATE(128)] = 3267,
  [SMALL_STATE(129)] = 3274,
  [SMALL_STATE(130)] = 3281,
  [SMALL_STATE(131)] = 3288,
  [SMALL_STATE(132)] = 3295,
  [SMALL_STATE(133)] = 3302,
  [SMALL_STATE(134)] = 3309,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(25),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(35),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(36),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(37),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(108),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(38),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(38),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(26),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(76),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(40),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(26),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(107),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dispatch, 7, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dispatch, 7, .production_id = 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionCall, 3, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionCall, 3, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionCall, 5, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionCall, 5, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 7),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dispatch, 6, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dispatch, 6, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functionCall, 4, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functionCall, 4, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dispatch, 9, .production_id = 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dispatch, 9, .production_id = 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dispatch, 7, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dispatch, 7, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dispatch, 5, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dispatch, 5, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dispatch, 8, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dispatch, 8, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dispatch_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classDefine_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classDefine_repeat1, 2), SHIFT_REPEAT(93),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(109),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2), SHIFT_REPEAT(81),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat3, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dispatch_repeat1, 2), SHIFT_REPEAT(44),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2), SHIFT_REPEAT(97),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2), SHIFT_REPEAT(110),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat2, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDefine, 7),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDefine, 6),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDefine, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 8),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 9),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDefine, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 10),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cool(void) {
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
