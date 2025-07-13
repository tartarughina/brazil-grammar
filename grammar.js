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
      field('key', $._key),
      field('assignment', choice('=', '+=')),
      field('value', $._value),
      ';',
    ),

    _key: $ => choice(
      prec(2, $.version),
      prec(1, $.string)
    ),

    _value: $ => choice(
      prec(2, $.version),
      prec(2, $.boolean),
      prec(1, $.dictionary),
      prec(1, $.list),
      prec(1, $.string)
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
      prec(-1, $._non_quoted_string),
    ),

    version: $ => choice(
      prec(3, $._mixed_version),
      prec(2, $._semver_number),
      prec(1, $._number)
    ),

    boolean: $ => $._boolean,

    _quoted_string: _ => /"(?:\\"|[^"])*"/,

    _non_quoted_string: _ => token(prec(-1,
      /(?:\\[\s#,;{}=+()]|[^\s#,;{}=+()"])+/
    )),

    _number: _ => /"?[0-9]+(\.[0-9]+)?"?/,
    _semver_number: _ => /"?[0-9]+(\.[0-9]+)*\.x"?/,
    _mixed_version: _ => /"?[0-9]+(\.[0-9]+)+(-[a-zA-Z0-9]+)?"?/,

    _boolean: _ => /"?(true|false)"?/,

    comment: _ => token(prec(-10, /#[^\n]*/)),
  }
});
