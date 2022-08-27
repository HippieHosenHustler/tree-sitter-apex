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
      seq(
        optional($.modifiers),
        $._type,
        $.identifier,
        $.method_parameters,
        $.method_body
      ),

    method_parameters: ($) => seq("(", optional($.method_parameter), ")"),

    method_parameter: ($) => seq($._type, $.identifier),

    _type: ($) =>
      choice(
        $.primitive_type,
        $.array_type
        // TODO: $.object_type,
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

    array_type: ($) =>
      seq(
        field("element", $._unannotated_type),
        field("dimensions", $.dimensions)
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

    local_variable_declaration: ($) =>
      seq(field("type", $._unannotated_type), $._variable_declarator_list, ";"),

    _unannotated_type: ($) => choice($.primitive_type, $.array_type),

    _annotated_type: ($) => seq(repeat($._annotation), $._unannotated_type),

    _variable_declarator_list: ($) =>
      commaSep1(field("declarator", $.variable_declarator)),

    variable_declarator: ($) =>
      seq(
        $._variable_declarator_id,
        optional(seq("=", field("value", $._variable_initializer)))
      ),

    _variable_declarator_id: ($) =>
      seq(
        field("name", $.identifier),
        field("dimensions", optional($.dimensions))
      ),

    dimensions: ($) =>
      prec.right(repeat1(seq(repeat($._annotation), "[", "]"))),

    _variable_initializer: ($) => choice($.expression, $.array_initializer),

    expression: ($) => "", //TODO: Expressions

    array_initializer: ($) =>
      seq("{", commaSep($._variable_initializer), optional(","), "}"),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
