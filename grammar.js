const PREC = {
  COMMENT: 0,
  ASSIGN: 1,
  DECL: 2,
  ELEMENT_VAL: 2,
  TENARY: 3,
  OR: 4,
  AND: 5,
};

module.exports = grammar({
  name: "Apex",
  extras: ($) => [$.line_comment, $.block_comment, /\s/],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.class_declaration
        // TODO: other definitions
      ),

    class_declaration: ($) =>
      seq(
        optional($.modifiers),
        "class",
        field("name", $.identifier),
        field("body", $.class_body)
      ),

    modifiers: ($) =>
      repeat1(
        choice(
          $._annotation,
          "private",
          "protected",
          "public",
          "global",
          "final",
          "static",
          "virtual",
          "abstract",
          "with sharing",
          "without sharing"
        )
      ),

    identifier: ($) => /[\p{L}_$][\p{L}\p{Nd}_$]*/,

    class_body: ($) =>
      seq(
        "{",
        // TODO: contents of a class body
        "}"
      ),

    _annotation: ($) =>
      seq(
        "@",
        choice(
          "AuraEnabled",
          "Deprecated",
          "Future",
          "InvocableMethod",
          "InvocableVariable",
          "IsTest",
          "JsonAccess",
          "NamespaceAccessible",
          "ReadOnly",
          "RemoteAction",
          "SuppressWarnings",
          "TestSetup",
          "TestVisible",
          "RestResource",
          "HttpDelete",
          "HttpGet",
          "HttpPatch",
          "HttpPost",
          "HttpPut"
        )
        // TODO: Variables like @AuraEnabled(Cacheable=true)
      ),
    line_comment: ($) => token(prec(PREC.COMMENT, seq("//", /[^\n]*/))),

    block_comment: ($) =>
      token(prec(PREC.COMMENT, seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))),
  },
});
