/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "zathurarc",

  extras: $ => [/\s/, /\\\r?\n/, $.comment, /\\( |\t|\v|\f)/],

  rules: {
    file: $ => optional($._statements),

    _statements: $ => seq(
      repeat(seq(
        $._statement,
        $._terminator,
      )),
      $._statement,
      optional($._terminator),
    ),

    _statement: $ =>
      choice(
        $.set_directive,
        $.include_directive,
        $.map_directive,
        $.unmap_directive
      ),

    set_directive: $ =>
      seq(
        alias("set", $.command),
        $.option,
        choice($.int, $.float, $._string, $.bool)
      ),

    option: _ => /[a-z-]+/,

    _int: _ => /\d+/,
    int: $ => $._int,
    float: $ =>
      prec(2, choice(seq(optional($._int), ".", $._int), seq($._int, "."))),
    bool: _ => choice("true", "false"),

    _word: _ => /([^"'#\s]|\\.)+/,
    _string: $ =>
      choice(
        quoted_string("'", $.string),
        quoted_string('"', $.string),
        alias($._word, $.string)
      ),
    _argument: $ =>
      choice(
        quoted_string("'", $.argument),
        quoted_string('"', $.argument),
        alias($._word, $.argument)
      ),

    include_directive: $ =>
      seq(alias("include", $.command), alias($._word, $.path)),

    unmap_directive: $ =>
      seq(alias("unmap", $.command), optional($.mode), $.key),

    map_directive: $ =>
      seq(
        alias("map", $.command),
        optional($.mode),
        $.key,
        alias(/[a-z_]+/, $.function),
        optional($._argument)
      ),

    key: $ =>
      choice(seq("<", alias(/[A-Z][a-zA-Z0-9-]+/, $.key_name), ">"), /\S/, /[^ \n\[\]<>]+/),
    mode: $ => seq("[", alias(/[^]]+/, $.mode_name), "]"),

    comment: _ => seq('#', /[^\n]*/),
    _terminator: _ => /\n/,
  },
});

function quoted_string(char, name) {
  return seq(
    char,
    alias(
      field("content", new RegExp("([^" + char + "]|\\\\" + char + ")*")),
      name
    ),
    char
  );
}
