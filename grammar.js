module.exports = grammar({
  name: 'brazil_config',

  extras: $ => [
    $.comment,
    /\\?\s/,
  ],

  rules: {
    source_file: $ => $.package,

    package: $ => seq(
      field('name', $.string),
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
      prec(2, $.version),    // Higher precedence than string
      prec(2, $.boolean),    // Higher precedence than string
      prec(1, $.string)      // Lower precedence
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
      prec(1, $._quoted_string),
      prec(0, $._non_quoted_string),  // Lowest precedence for non-quoted
    ),

    version: $ => choice(
      prec(3, $._mixed_version),    // Most specific first
      prec(2, $._semver_number),
      prec(1, $._number)
    ),

    boolean: $ => $._boolean,

    _quoted_string: _ => /"(?:\\"|[^"])*"/,

    // Make non-quoted string more restrictive to avoid conflicts
    _non_quoted_string: _ => token(prec(-1, /(?:\\[\s#,;{}=+()]|[^\s#,;{}=+()"])+/)),

    _number: _ => /"?[0-9]+(\.[0-9]+)?"?/,
    _semver_number: _ => /"?[0-9]+(\.[0-9]+)*\.x"?/,
    _mixed_version: _ => /"?[0-9]+(\.[0-9]+)+(-[a-zA-Z0-9]+)?"?/,

    _boolean: _ => /"?(true|false)"?/,

    comment: _ => token(prec(-10, /#[^\n]*/)),
  }
});
