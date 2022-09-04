const DIGITS = token(sep1(/[0-9]+/, /_+/));

const HEX_DIGITS = token(sep1(/[A-Fa-f0-9]+/, "_"));

const PREC = {
  // https://introcs.cs.princeton.edu/java/11precedence/
  COMMENT: 0, // //  /*  */
  ASSIGN: 1, // =  += -=  *=  /=  %=  &=  ^=  |=  <<=  >>=  >>>=
  DECL: 2,
  ELEMENT_VAL: 2,
  TERNARY: 3, // ?:
  OR: 4, // ||
  AND: 5, // &&
  BIT_OR: 6, // |
  BIT_XOR: 7, // ^
  BIT_AND: 8, // &
  EQUALITY: 9, // ==  !=
  GENERIC: 10,
  REL: 10, // <  <=  >  >=  instanceof
  SHIFT: 11, // <<  >>  >>>
  ADD: 12, // +  -
  MULT: 13, // *  /  %
  CAST: 14, // (Type)
  OBJ_INST: 14, // new
  UNARY: 15, // ++a  --a  a++  a--  +  -  !  ~
  ARRAY: 16, // [Index]
  OBJ_ACCESS: 16, // .
  PARENS: 16, // (Expression)
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

    array_initializer: ($) =>
      seq("{", commaSep($._variable_initializer), optional(","), "}"),

    expression: ($) =>
      choice(
        $.assignment_expression,
        $.binary_expression,
        $.instanceof_expression,
        $.ternary_expression,
        $.update_expression,
        $.primary_expression,
        $.unary_expression,
        $.cast_expression,
        $.switch_expression
      ),

    assignment_expression: ($) => (
      field(
        "left",
        choice(
          $.identifier,
          $._reserved_identifier,
          $.field_access,
          $.array_access
        )
      ),
      field(
        "operator",
        choice(
          "=",
          "+=",
          "-=",
          "*=",
          "/=",
          "&=",
          "|=",
          "^=",
          "%=",
          "<<=",
          ">>=",
          ">>>="
        )
      ),
      field("right", $.expression)
    ),

    binary_expression: ($) =>
      choice(
        ...[
          [">", PREC.REL],
          ["<", PREC.REL],
          [">=", PREC.REL],
          ["<=", PREC.REL],
          ["==", PREC.EQUALITY],
          ["!=", PREC.EQUALITY],
          ["&&", PREC.AND],
          ["||", PREC.OR],
          ["+", PREC.ADD],
          ["-", PREC.ADD],
          ["*", PREC.MULT],
          ["/", PREC.MULT],
          ["&", PREC.BIT_AND],
          ["|", PREC.BIT_OR],
          ["^", PREC.BIT_XOR],
          ["%", PREC.MULT],
          ["<<", PREC.SHIFT],
          [">>", PREC.SHIFT],
          [">>>", PREC.SHIFT],
        ].map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(
              field("left", $.expression),
              field("operator", operator),
              field("right", $.expression)
            )
          )
        )
      ),

    instanceof_expression: ($) =>
      prec(
        PREC.REL,
        seq(
          field("left", $.expression),
          "instanceof",
          field("right", $._type),
          field("name", optional(choice($.identifier, $._reserved_identifier)))
        )
      ),

    ternary_expression: ($) =>
      prec.right(
        PREC.TERNARY,
        seq(
          field("condition", $.expression),
          "?",
          field("consequence", $.expression),
          ":",
          field("alternative", $.expression)
        )
      ),

    update_expression: ($) =>
      prec.left(
        PREC.UNARY,
        choice(
          seq($.expression, "++"),
          seq($.expression, "--"),
          seq("++", $.expression),
          seq("--", $.expression)
        )
      ),

    primary_expression: ($) =>
      choice(
        $._literal,
        $.class_literal,
        $.this,
        $.identifier,
        $._reserved_identifier,
        $.parenthesized_expression,
        $.object_creation_expression,
        $.field_access,
        $.array_access,
        $.method_invocation,
        $.array_creation_expression
      ),

    unary_expression: ($) =>
      choice(
        ...[
          ["+", PREC.UNARY],
          ["-", PREC.UNARY],
          ["!", PREC.UNARY],
          ["~", PREC.UNARY],
        ].map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(field("operator", operator), field("operand", $.expression))
          )
        )
      ),

    cast_expression: ($) =>
      prec(
        PREC.CAST,
        seq(
          "(",
          sep1(field("type", $._type), "&"),
          ")",
          field("value", $.expression)
        )
      ),

    switch_expression: ($) =>
      seq(
        "switch",
        field("condition", $.parenthesized_expression),
        field("body", $.switch_block)
      ),

    switch_block: ($) =>
      seq(
        "{",
        choice(repeat($.switch_block_statement_group), repeat($.switch_rule)),
        "}"
      ),

    switch_block_statement_group: ($) =>
      prec.left(seq(repeat1(seq($.switch_label, ":")), repeat($.statement))),

    switch_rule: ($) =>
      seq(
        $.switch_label,
        "->",
        choice($.expression_statement, $.throw_statement, $.block)
      ),

    _reserved_identifier: ($) =>
      alias(choice("open", "module", "record"), $.identifier),

    this: ($) => "this",

    field_access: ($) =>
      seq(
        field("object", choice($.primary_expression, $.super)),
        optional(seq(".", $.super)),
        ".",
        field("field", choice($.identifier, $._reserved_identifier, $.this))
      ),

    array_access: ($) =>
      seq(
        field("array", $.primary_expression),
        "[",
        field("index", $.expression),
        "]"
      ),

    _literal: ($) =>
      choice(
        $.decimal_integer_literal,
        $.decimal_floating_point_literal,
        $.true,
        $.false,
        $.string_literal,
        $.null_literal
      ),

    decimal_integer_literal: ($) =>
      token(seq(DIGITS, optional(choice("l", "L")))),

    decimal_floating_point_literal: ($) =>
      token(
        choice(
          seq(
            DIGITS,
            ".",
            optional(DIGITS),
            optional(seq(/[eE]/, optional(choice("-", "+")), DIGITS)),
            optional(/[fFdD]/)
          ),
          seq(
            ".",
            DIGITS,
            optional(seq(/[eE]/, optional(choice("-", "+")), DIGITS)),
            optional(/[fFdD]/)
          ),
          seq(
            DIGITS,
            /[eEpP]/,
            optional(choice("-", "+")),
            DIGITS,
            optional(/[fFdD]/)
          ),
          seq(
            DIGITS,
            optional(seq(/[eE]/, optional(choice("-", "+")), DIGITS)),
            /[fFdD]/
          )
        )
      ),

    true: ($) => "true",

    false: ($) => "false",

    string_literal: ($) =>
      token(seq(seq("'", repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), "'"))),

    null_literal: ($) => "null",

    class_literal: ($) => seq($._unannotated_type, ".", "class"),

    parenthesized_expression: ($) => seq("(", $.expression, ")"),

    object_creation_expression: ($) =>
      choice(
        $._unqualified_object_creation_expression,
        seq(
          $.primary_expression,
          ".",
          $._unqualified_object_creation_expression
        )
      ),

    method_invocation: ($) =>
      seq(
        choice(
          field("name", choice($.identifier, $._reserved_identifier)),
          seq(
            field("object", choice($.primary_expression, $.super)),
            ".",
            optional(seq($.super, ".")),
            field("type_arguments", optional($.type_arguments)),
            field("name", choice($.identifier, $._reserved_identifier))
          )
        )
      ),

    array_creation_expression: ($) =>
      prec.right(
        seq(
          "new",
          repeat($._annotation),
          field("type", $._simple_type),
          choice(
            seq(
              field("dimensions", repeat1($.dimensions_expr)),
              field("dimensions", optional($.dimensions))
            ),
            seq(
              field("dimensions", $.dimensions),
              field("value", $.array_initializer)
            )
          )
        )
      ),

    switch_label: ($) =>
      choice(seq("case", commaSep1($.expression)), "default"),

    statement: ($) =>
      choice(
        $.declaration,
        $.expression_statement,
        $.if_statement,
        $.while_statement,
        $.for_statement,
        $.enhanced_for_statement,
        $.block,
        ";",
        $.do_statement,
        $.break_statement,
        $.continue_statement,
        $.return_statement,
        $.switch_expression,
        $.local_variable_declaration,
        $.throw_statement,
        $.try_statement
      ),

    expression_statement: ($) => seq($.expression, ";"),

    throw_statement: ($) => seq("throw", $.expression, ";"),

    block: ($) => seq("{", repeat($.statement), "}"),

    super: ($) => "super",

    _unqualified_object_creation_expression: ($) =>
      prec.right(
        seq(
          "new",
          field("type_arguments", optional($.type_arguments)),
          field("type", $._simple_type),
          field("arguments", $.argument_list),
          optional($.class_body)
        )
      ),

    type_arguments: ($) => seq("<", commaSep($._type), ">"),

    _simple_type: ($) =>
      choice(
        $.void_type,
        alias($.identifier, $.type_identifier),
        $.scoped_type_identifier,
        $.generic_type
      ),

    dimensions_expr: ($) => seq(repeat($._annotation), "[", $.expression, "]"),

    declaration: ($) =>
      prec(
        PREC.DECL,
        choice($.class_declaration, $.interface_declaration, $.enum_declaration)
      ),

    if_statement: ($) =>
      prec.right(
        seq(
          "if",
          field("condition", $.parenthesized_expression),
          field("consequence", $.statement),
          optional(seq("else", field("alternative", $.statement)))
        )
      ),

    while_statement: ($) =>
      seq(
        "while",
        field("condition", $.parenthesized_expression),
        field("body", $.statement)
      ),

    for_statement: ($) =>
      seq(
        "for",
        "(",
        choice(
          field("init", $.local_variable_declaration),
          seq(commaSep(field("init", $.expression)), ";")
        ),
        field("condition", optional($.expression)),
        ";",
        commaSep(field("update", $.expression)),
        ")",
        field("body", $.statement)
      ),

    enhanced_for_statement: ($) =>
      seq(
        "for",
        "(",
        optional($.modifiers),
        field("type", $._unannotated_type),
        $._variable_declarator_id,
        ":",
        field("value", $.expression),
        ")",
        field("body", $.statement)
      ),

    do_statement: ($) =>
      seq(
        "do",
        field("body", $.statement),
        "while",
        field("condition", $.parenthesized_expression),
        ";"
      ),

    break_statement: ($) => seq("break", ";"),

    continue_statement: ($) => seq("continue", ";"),

    return_statement: ($) => seq("return", optional($.expression), ";"),

    try_statement: ($) =>
      seq(
        "try",
        field("body", $.block),
        choice(
          repeat1($.catch_clause),
          seq(repeat($.catch_clause), $.finally_clause)
        )
      ),

    catch_clause: ($) =>
      seq("catch", "(", $.catch_formal_parameter, ")", field("body", $.block)),

    catch_formal_parameter: ($) =>
      seq(optional($.modifiers), $.catch_type, $._variable_declarator_id),

    catch_type: ($) => sep1($._unannotated_type, "|"),

    finally_clause: ($) => seq("finally", $.block),

    argument_list: ($) => seq("(", commaSep($.expression), ")"),

    void_type: ($) => "void",

    scoped_type_identifier: ($) =>
      seq(
        choice(
          alias($.identifier, $.type_identifier),
          $.scoped_type_identifier,
          $.generic_type
        ),
        ".",
        repeat($._annotation),
        alias($.identifier, $.type_identifier)
      ),

    generic_type: ($) =>
      prec.dynamic(
        PREC.GENERIC,
        seq(
          choice(
            alias($.identifier, $.type_identifier),
            $.scoped_type_identifier
          ),
          $.type_arguments
        )
      ),

    interface_declaration: ($) =>
      seq(
        optional($.modifiers),
        "interface",
        field("name", $.identifier),
        field("type_parameters", optional($.type_parameters)),
        optional($.extends_interfaces),
        field("body", $.interface_body)
      ),

    extends_interfaces: ($) => seq("extends", $.type_list),

    interface_body: ($) =>
      seq(
        "{",
        repeat(
          choice(
            $.constant_declaration,
            $.enum_declaration,
            $.method_declaration,
            $.class_declaration,
            $.interface_declaration,
            ";"
          )
        ),
        "}"
      ),

    constant_declaration: ($) =>
      seq(
        optional($.modifiers),
        field("type", $._unannotated_type),
        $._variable_declarator_list,
        ";"
      ),

    enum_declaration: ($) =>
      seq(
        optional($.modifiers),
        "enum",
        field("name", $.identifier),
        field("body", $.enum_body)
      ),

    enum_body: ($) => seq("{", commaSep($.enum_constant), "}"),

    enum_constant: ($) =>
      seq(optional($.modifiers), field("name", $.identifier)),

    type_parameters: ($) => seq("<", commaSep1($.type_parameter), ">"),

    type_parameter: ($) =>
      seq(repeat($._annotation), alias($.identifier, $.type_identifier)),

    type_list: ($) => seq($._type, repeat(seq(",", $._type))),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
