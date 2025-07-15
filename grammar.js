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
      prec(3, $.keyword),
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

    // Add the keyword rule
    keyword: _ => choice(
      'build-environment',
      'build-system',
      'build-task-configuration',
      'build-tools',
      'dependencies',
      'deploy',
      'interfaces',
      'rebuild-when-dependency-changes',
      'remove-dependencies',
      'resolves-conflict-dependencies',
      'runtime-dependencies',
      'scope',
      'synonym-for',
      'targets',
      'test-dependencies',
      'type'
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

    _quoted_string: _ => /"(?:\\"|[^"])*"/,

    _non_quoted_string: _ => token(prec(-1,
      /(?:\\[\s#,;{}=+()]|[^\s#,;{}=+()"])+/
    )),

    version: _ => /(\d+(?:\.[a-zA-Z0-9_\-]+)*)/,

    boolean: _ => /(true|false)/,

    comment: _ => token(prec(-10, /#[^\n]*/)),
  }
});
