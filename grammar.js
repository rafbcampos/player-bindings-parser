module.exports = grammar({
  name: "player_bindings",
  extras: ($) => [$.whitespace, /[\s\n]*/],
  rules: {
    pathNode: ($) =>
      seq($.segment, repeat(seq($.segment_separator, $.segment))),
    segment: ($) =>
      prec.left(
        choice(
          seq(
            choice($.expression, $.modelRef, $.value, $.query),
            repeat($.segment),
          ),
          seq($.single_quote, $.value, $.single_quote),
          seq($.double_quote, $.value, $.double_quote),
        ),
      ),
    modelRef: ($) =>
      seq($.open_curl, $.open_curl, $.pathNode, $.close_curl, $.close_curl),
    value: ($) => /[\w\-@]+/,
    query: ($) =>
      seq(
        $.open_bracket,
        $.segment,
        $.equals,
        optional($.equals),
        optional($.equals),
        $.segment,
        $.close_bracket,
      ),
    expression_value: ($) => /[^`]*/,
    expression: ($) => seq($.back_tick, $.expression_value, $.back_tick),
    equals: ($) => "=",
    segment_separator: ($) => ".",
    single_quote: ($) => "'",
    double_quote: ($) => '"',
    whitespace: ($) => " ",
    open_curl: ($) => "{",
    close_curl: ($) => "}",
    open_bracket: ($) => "[",
    close_bracket: ($) => "]",
    back_tick: ($) => "`",
  },
});
