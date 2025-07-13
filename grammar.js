module.exports = grammar({
  name: 'brazil_config',

  extras: $ => [
    $.comment,
    /\\?\s/,
  ],

  rules: {
    source_file: $ => $.package,

    package: $ => seq(
      'package.',  // Make this a separate token
      field('name', $._non_quoted_string), // Directly expose the name at top level
      field('assignment', '='),
      field('value', $.dictionary),
      ';'
    ),

    pair: $ => seq(
      field('key', $.string),
      field('assignment', choice('=', '+=')),
      field('value', $._value),
      ';',
    ),

    _value: $ => choice(
      $.dictionary,
      $.list,
      $.string
    ),

    dictionary: $ => seq(
      "{",
      repeat($.pair),
      "}"
    ),

    list: $ => seq(
      "(",
      optional($._elements),
      ")"
    ),

    _elements: $ => seq(
      $._value,
      repeat(seq(',', $._value)),
      optional(',')
    ),

    string: $ => choice(
      $._quoted_string,
      $._non_quoted_string,
    ),

    _quoted_string: _ => /"(?:\\"|[^"])*"/,

    _non_quoted_string: _ => /(?:\\[\s#,;{}=+()]|[^\s#,;{}=+()])+/,

    comment: _ => token(prec(-10, /#[^\n]*/)),
  }
});
