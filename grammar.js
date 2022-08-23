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
    source_file: ($) => repeat($.class_declaration),

    class_declaration: ($) =>
      seq(
        optional($.modifiers),
        "class",
        field("name", $.identifier),
        field("body", $.class_body)
      ),

    method_declaration: ($) =>
      seq(optional($.modifiers), $._type, $.identifier, $.method_body),

    _type: ($) =>
      choice(
        $.primitive_type
        // $.array_type,
        // $.object_type,
      ),

    primitive_type: ($) =>
      choice(
        "Blob",
        "Boolean",
        "Date",
        "Datetime",
        "Decimal",
        "Double",
        "Id",
        "Integer",
        "Long",
        "Object",
        "String",
        "Time"
      ),

    modifiers: ($) =>
      // TODO: Split into different types of modifiers? (Class, method, variable etc.)
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
          "without sharing",
          "override"
        )
      ),

    identifier: ($) => /[\p{L}_$][\p{L}\p{Nd}_$]*/,

    class_body: ($) =>
      seq(
        "{",
        // TODO: contents of a class body
        optional(seq($.method_declaration)),
        "}"
      ),

    method_body: ($) =>
      seq(
        "{",
        // TODO: contents of a method body
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
