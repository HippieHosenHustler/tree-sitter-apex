#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_class = 1,
  anon_sym_private = 2,
  anon_sym_protected = 3,
  anon_sym_public = 4,
  anon_sym_global = 5,
  anon_sym_final = 6,
  anon_sym_static = 7,
  anon_sym_virtual = 8,
  anon_sym_abstract = 9,
  anon_sym_withsharing = 10,
  anon_sym_withoutsharing = 11,
  sym_identifier = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_AT = 15,
  anon_sym_AuraEnabled = 16,
  anon_sym_Deprecated = 17,
  anon_sym_Future = 18,
  anon_sym_InvocableMethod = 19,
  anon_sym_InvocableVariable = 20,
  anon_sym_IsTest = 21,
  anon_sym_JsonAccess = 22,
  anon_sym_NamespaceAccessible = 23,
  anon_sym_ReadOnly = 24,
  anon_sym_RemoteAction = 25,
  anon_sym_SuppressWarnings = 26,
  anon_sym_TestSetup = 27,
  anon_sym_TestVisible = 28,
  anon_sym_RestResource = 29,
  anon_sym_HttpDelete = 30,
  anon_sym_HttpGet = 31,
  anon_sym_HttpPatch = 32,
  anon_sym_HttpPost = 33,
  anon_sym_HttpPut = 34,
  sym_line_comment = 35,
  sym_block_comment = 36,
  sym_source_file = 37,
  sym__definition = 38,
  sym_class_declaration = 39,
  sym_modifiers = 40,
  sym_class_body = 41,
  sym__annotation = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_modifiers_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_public] = "public",
  [anon_sym_global] = "global",
  [anon_sym_final] = "final",
  [anon_sym_static] = "static",
  [anon_sym_virtual] = "virtual",
  [anon_sym_abstract] = "abstract",
  [anon_sym_withsharing] = "with sharing",
  [anon_sym_withoutsharing] = "without sharing",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_AuraEnabled] = "AuraEnabled",
  [anon_sym_Deprecated] = "Deprecated",
  [anon_sym_Future] = "Future",
  [anon_sym_InvocableMethod] = "InvocableMethod",
  [anon_sym_InvocableVariable] = "InvocableVariable",
  [anon_sym_IsTest] = "IsTest",
  [anon_sym_JsonAccess] = "JsonAccess",
  [anon_sym_NamespaceAccessible] = "NamespaceAccessible",
  [anon_sym_ReadOnly] = "ReadOnly",
  [anon_sym_RemoteAction] = "RemoteAction",
  [anon_sym_SuppressWarnings] = "SuppressWarnings",
  [anon_sym_TestSetup] = "TestSetup",
  [anon_sym_TestVisible] = "TestVisible",
  [anon_sym_RestResource] = "RestResource",
  [anon_sym_HttpDelete] = "HttpDelete",
  [anon_sym_HttpGet] = "HttpGet",
  [anon_sym_HttpPatch] = "HttpPatch",
  [anon_sym_HttpPost] = "HttpPost",
  [anon_sym_HttpPut] = "HttpPut",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_class_declaration] = "class_declaration",
  [sym_modifiers] = "modifiers",
  [sym_class_body] = "class_body",
  [sym__annotation] = "_annotation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_withsharing] = anon_sym_withsharing,
  [anon_sym_withoutsharing] = anon_sym_withoutsharing,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AuraEnabled] = anon_sym_AuraEnabled,
  [anon_sym_Deprecated] = anon_sym_Deprecated,
  [anon_sym_Future] = anon_sym_Future,
  [anon_sym_InvocableMethod] = anon_sym_InvocableMethod,
  [anon_sym_InvocableVariable] = anon_sym_InvocableVariable,
  [anon_sym_IsTest] = anon_sym_IsTest,
  [anon_sym_JsonAccess] = anon_sym_JsonAccess,
  [anon_sym_NamespaceAccessible] = anon_sym_NamespaceAccessible,
  [anon_sym_ReadOnly] = anon_sym_ReadOnly,
  [anon_sym_RemoteAction] = anon_sym_RemoteAction,
  [anon_sym_SuppressWarnings] = anon_sym_SuppressWarnings,
  [anon_sym_TestSetup] = anon_sym_TestSetup,
  [anon_sym_TestVisible] = anon_sym_TestVisible,
  [anon_sym_RestResource] = anon_sym_RestResource,
  [anon_sym_HttpDelete] = anon_sym_HttpDelete,
  [anon_sym_HttpGet] = anon_sym_HttpGet,
  [anon_sym_HttpPatch] = anon_sym_HttpPatch,
  [anon_sym_HttpPost] = anon_sym_HttpPost,
  [anon_sym_HttpPut] = anon_sym_HttpPut,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_class_declaration] = sym_class_declaration,
  [sym_modifiers] = sym_modifiers,
  [sym_class_body] = sym_class_body,
  [sym__annotation] = sym__annotation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_withsharing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_withoutsharing] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AuraEnabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Deprecated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Future] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InvocableMethod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InvocableVariable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IsTest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JsonAccess] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NamespaceAccessible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ReadOnly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RemoteAction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SuppressWarnings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TestSetup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TestVisible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RestResource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HttpDelete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HttpGet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HttpPatch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HttpPost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HttpPut] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
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
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym__annotation] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_body, 3},
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? c == '$'
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(221);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(210);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'F') ADVANCE(212);
      if (lookahead == 'H') ADVANCE(196);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == 'J') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(18);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(211);
      if (lookahead == 'T') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 'v') ADVANCE(103);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '{') ADVANCE(234);
      if (lookahead == '}') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(256);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(233);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'V') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'V') ADVANCE(109);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'W') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(176);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(1);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 218:
      if (lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 219:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 220:
      if (lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_withsharing);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_withoutsharing);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_AuraEnabled);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_Future);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_InvocableMethod);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_InvocableVariable);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_IsTest);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_JsonAccess);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_NamespaceAccessible);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_ReadOnly);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_RemoteAction);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SuppressWarnings);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_TestSetup);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_TestVisible);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RestResource);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_HttpDelete);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_HttpGet);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_HttpPatch);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_HttpPost);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_HttpPut);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_block_comment);
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
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_withsharing] = ACTIONS(1),
    [anon_sym_withoutsharing] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AuraEnabled] = ACTIONS(1),
    [anon_sym_Deprecated] = ACTIONS(1),
    [anon_sym_Future] = ACTIONS(1),
    [anon_sym_InvocableMethod] = ACTIONS(1),
    [anon_sym_InvocableVariable] = ACTIONS(1),
    [anon_sym_IsTest] = ACTIONS(1),
    [anon_sym_JsonAccess] = ACTIONS(1),
    [anon_sym_NamespaceAccessible] = ACTIONS(1),
    [anon_sym_ReadOnly] = ACTIONS(1),
    [anon_sym_RemoteAction] = ACTIONS(1),
    [anon_sym_SuppressWarnings] = ACTIONS(1),
    [anon_sym_TestSetup] = ACTIONS(1),
    [anon_sym_TestVisible] = ACTIONS(1),
    [anon_sym_RestResource] = ACTIONS(1),
    [anon_sym_HttpDelete] = ACTIONS(1),
    [anon_sym_HttpGet] = ACTIONS(1),
    [anon_sym_HttpPatch] = ACTIONS(1),
    [anon_sym_HttpPost] = ACTIONS(1),
    [anon_sym_HttpPut] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__definition] = STATE(3),
    [sym_class_declaration] = STATE(3),
    [sym_modifiers] = STATE(15),
    [sym__annotation] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(9),
    [anon_sym_protected] = ACTIONS(9),
    [anon_sym_public] = ACTIONS(9),
    [anon_sym_global] = ACTIONS(9),
    [anon_sym_final] = ACTIONS(9),
    [anon_sym_static] = ACTIONS(9),
    [anon_sym_virtual] = ACTIONS(9),
    [anon_sym_abstract] = ACTIONS(9),
    [anon_sym_withsharing] = ACTIONS(9),
    [anon_sym_withoutsharing] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 19,
      anon_sym_AuraEnabled,
      anon_sym_Deprecated,
      anon_sym_Future,
      anon_sym_InvocableMethod,
      anon_sym_InvocableVariable,
      anon_sym_IsTest,
      anon_sym_JsonAccess,
      anon_sym_NamespaceAccessible,
      anon_sym_ReadOnly,
      anon_sym_RemoteAction,
      anon_sym_SuppressWarnings,
      anon_sym_TestSetup,
      anon_sym_TestVisible,
      anon_sym_RestResource,
      anon_sym_HttpDelete,
      anon_sym_HttpGet,
      anon_sym_HttpPatch,
      anon_sym_HttpPost,
      anon_sym_HttpPut,
  [26] = 8,
    ACTIONS(7), 1,
      anon_sym_class,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym__annotation,
      aux_sym_modifiers_repeat1,
    STATE(4), 3,
      sym__definition,
      sym_class_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 10,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_global,
      anon_sym_final,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_abstract,
      anon_sym_withsharing,
      anon_sym_withoutsharing,
  [64] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_class,
    ACTIONS(25), 1,
      anon_sym_AT,
    STATE(15), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym__annotation,
      aux_sym_modifiers_repeat1,
    STATE(4), 3,
      sym__definition,
      sym_class_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(22), 10,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_global,
      anon_sym_final,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_abstract,
      anon_sym_withsharing,
      anon_sym_withoutsharing,
  [102] = 5,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(28), 1,
      anon_sym_class,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(6), 2,
      sym__annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(30), 10,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_global,
      anon_sym_final,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_abstract,
      anon_sym_withsharing,
      anon_sym_withoutsharing,
  [129] = 5,
    ACTIONS(32), 1,
      anon_sym_class,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(6), 2,
      sym__annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(34), 10,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_global,
      anon_sym_final,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_abstract,
      anon_sym_withsharing,
      anon_sym_withoutsharing,
  [156] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(40), 13,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_global,
      anon_sym_final,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_abstract,
      anon_sym_withsharing,
      anon_sym_withoutsharing,
      anon_sym_AT,
  [176] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(42), 13,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_global,
      anon_sym_final,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_abstract,
      anon_sym_withsharing,
      anon_sym_withoutsharing,
      anon_sym_AT,
  [196] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(44), 13,
      ts_builtin_sym_end,
      anon_sym_class,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_global,
      anon_sym_final,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_abstract,
      anon_sym_withsharing,
      anon_sym_withoutsharing,
      anon_sym_AT,
  [216] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(46), 12,
      anon_sym_class,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_public,
      anon_sym_global,
      anon_sym_final,
      anon_sym_static,
      anon_sym_virtual,
      anon_sym_abstract,
      anon_sym_withsharing,
      anon_sym_withoutsharing,
      anon_sym_AT,
  [235] = 3,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [246] = 3,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [257] = 2,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [265] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [273] = 2,
    ACTIONS(54), 1,
      anon_sym_class,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [281] = 2,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [289] = 2,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 129,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 235,
  [SMALL_STATE(12)] = 246,
  [SMALL_STATE(13)] = 257,
  [SMALL_STATE(14)] = 265,
  [SMALL_STATE(15)] = 273,
  [SMALL_STATE(16)] = 281,
  [SMALL_STATE(17)] = 289,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, .production_id = 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotation, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Apex(void) {
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
