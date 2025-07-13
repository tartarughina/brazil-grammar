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
      $.string,
      $.version,
      $.boolean
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

    version: $ => choice(
      $._number,
      $._semver_number,
      $._mixed_version
    ),

    boolean: $ => $._boolean,

    _quoted_string: _ => /"(?:\\"|[^"])*"/,

    _non_quoted_string: _ => /(?:\\[\s#,;{}=+()]|[^\s#,;{}=+()])+/,

    _number: _ => /"?[0-9]+(\.[0-9]+)?"?/,
    _semver_number: _ => /"?[0-9]+(\.[0-9]+)*\.x"?/,
    _mixed_version: _ => /"?[0-9]+(\.[0-9]+)+(-[a-zA-Z0-9]+)?"?/,

    _boolean: _ => /"?(true|false)"?/,

    comment: _ => token(prec(-10, /#[^\n]*/)),
  }
});
