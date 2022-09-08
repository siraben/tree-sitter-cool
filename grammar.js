const ASGN = '<-';

module.exports = grammar({
  name: 'cool',
  extras: $ => [
    /\s/,
    $.comment,
  ],
  word: $ => $.id,
  rules: {
    program: $ => choice(
      repeat(seq($.classDefine,';')),
    ),
    classDefine: $ => seq('class',$.type,optional(seq('inherits',$.type)),'{',
                          repeat(seq($.feature,';')),
                          '}'),
    feature: $ => choice($.method,$.property),
    method: $ => seq(field('name',$.id),'(',commaSep($.formal),')',':',$.type,'{',$.expr,'}'),
    property: $ => seq($.formal,optional(seq(ASGN,$.expr))),
    formal: $ => seq($.id,':',$.type),
    id: $ => /[a-z][_0-9A-Za-z]*/,
    type: $ => /[A-Z][_0-9A-Za-z]*/,
    expr: $ => prec.right(2,choice(
      $.dispatch,
      $.functionCall,
      $.if,
      seq('while',field('condition',$.expr),'loop',field('body',$.expr),'pool'),
      seq('{',repeat1(seq($.expr,';')),'}'),
      seq('case',$.expr,'of',repeat1(seq($.formal,'=>',$.expr,';')),'esac'),
      seq('new',$.type),
      seq('~',$.expr),
      seq('isvoid',$.expr),
      prec.right(4,seq($.expr,choice('*','/'),$.expr)),
      prec.right(3,seq($.expr,choice('+','-'),$.expr)),
      seq($.expr,choice('<=','<','='),$.expr),
      seq('not',$.expr),
      seq('(',$.expr,')'),
      $.id,
      $.int,
      $.string,
      choice('true','false'),
      seq($.id,ASGN,$.expr),
      seq('let',commaSep($.property),'in',$.expr),
    )),
    dispatch: $ => seq($.expr,
                       optional(seq('@',$.type)),
                       '.',
                       field('name',$.id),
                       '(',commaSep($.expr),')'),
    functionCall: $ => seq(field('name',$.id),'(',commaSep($.expr),')'),
    if: $ => seq('if',
                 field('condition',$.expr),
                 'then',
                 field('then',$.expr),
                 'else',
                 field('else',$.expr),
                 'fi'),
    int: $ => /[0-9]+/,
    string: $ => seq('"', /(?:[^"\\]|\\.)*/, '"'),
    comment: $ => token(choice(
      seq('--', /.*/),
      seq(
        '(*',
        repeat(choice(
          /[^*]/,
          /\*[^)]/,
        )),
        '*)'
      ))),

  }
});

function sep(rule, separator) {
  return optional(sep1(rule, separator));
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return sep1(rule, ',');
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
