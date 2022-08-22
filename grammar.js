module.exports = grammar({
  name: "Apex",
  rules: {
    // TODO: add the actual grammar rules
    id: ($) => /[a-z]+/,
    nat: ($) => /[0-9]+/,
    program: ($) => $.aexp,
    aexp: ($) =>
      choice(
        /[0-9]+/,
        /[a-z]+/,
        seq($.aexp, "+", $.aexp),
        seq($.aexp, "-", $.aexp),
        seq($.aexp, "*", $.aexp),
        seq("(", $.aexp, ")")
      ),
  },
});
