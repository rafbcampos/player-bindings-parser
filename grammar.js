module.exports = grammar({
  name: "player_bindings",
  extras: ($) => [/[\s\n]*/],
  rules: {
    pathNode: ($) =>
      seq($.segment, repeat(seq($.segment_separator, $.segment))),
    segment: ($) =>
      prec.left(
        choice(
          seq(
            choice($.expression, $.modelRef, $.value, $.query),
            repeat($.segment)
          ),
          seq($.single_quote, $.value, $.single_quote),
          seq($.double_quote, $.value, $.double_quote)
        )
      ),
    modelRef: ($) =>
      seq($.open_curl, $.open_curl, $.pathNode, $.close_curl, $.close_curl),
    value: ($) => /[\w\-@]+/,
    query: ($) =>
      seq(
        $.open_bracket,
        $.segment,
        optional($.equals),
        optional($.equals),
        optional($.equals),
        optional($.segment),
        $.close_bracket
      ),
    expression: ($) =>
      prec.left(
        seq(
          $.back_tick,
          repeat(
            seq(
              $.segment,
              repeat(
                choice(
                  seq($.open_paren, optional($.segment), $.close_paren),
                  seq($.equals, optional($.equals), optional($.equals))
                )
              )
            )
          ),
          $.back_tick
        )
      ),
    equals: ($) => "=",
    segment_separator: ($) => ".",
    single_quote: ($) => "'",
    double_quote: ($) => '"',
    open_curl: ($) => "{",
    close_curl: ($) => "}",
    open_bracket: ($) => "[",
    close_bracket: ($) => "]",
    open_paren: ($) => "(",
    close_paren: ($) => ")",
    back_tick: ($) => "`",
  },
});
