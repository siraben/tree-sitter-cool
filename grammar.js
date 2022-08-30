const ASGN = '<-';

module.exports = grammar({
  name: 'cool',
  extras: $ => [
    /\s/,
    $.comment,
  ],
  conflicts: $ => [
    // [$.method, $.property],
  ],
  rules: {
    program: $ => choice(
      repeat(seq($.classDefine,';')),
    ),
    classDefine: $ => seq('class',$.type,optional(seq('inherits',$.type)),'{',
                          repeat(seq($.feature,';')),
                          '}'),
    feature: $ => choice($.method,$.property),
    // method	 : ID '(' (formal (',' formal)*)* ')' ':' TYPE '{' expression '}'
    method: $ => seq($.id,'(',commaSep($.formal),')',':',$.type,'{',$.expression,'}'),
    property: $ => seq($.formal,optional(seq(ASGN,$.expression))),
    formal: $ => seq($.id,':',$.type),
    id: $ => /[a-z][_0-9A-Za-z]*/,
    type: $ => /[A-Z][_0-9A-Za-z]*/,
    expression: $ => prec.right(2,choice(
      seq($.expression,optional(seq('@',$.type)),$.id,'(',commaSep($.expression),')'),
      seq($.id,'(',commaSep($.expression),')'),
      seq('if',$.expression,'then',$.expression,'else',$.expression,'fi'),
      seq('while',$.expression,'loop',$.expression,'pool'),
      seq('{',repeat1(seq($.expression,';')),'}'),
      seq('case',$.expression,'of',repeat1(seq('formal','=>',$.expression,'l')),'esac'),
      seq('new',$.type),
      seq('~',$.expression),
      seq('isvoid',$.expression),
      prec.right(3,seq($.expression,choice('*','/'),$.expression)),
      prec.right(4,seq($.expression,choice('+','-'),$.expression)),
      seq($.expression,choice('<=','<','='),$.expression),
      seq('not',$.expression),
      seq('(',$.expression,')'),
      $.id,
      $.int,
      $.string,
      choice('true','false'),
      seq($.id,ASGN,$.expression),
      seq('let',commaSep($.property),'in',$.expression),
    )),
    int: $ => /[0-9]+/,
    string: $ => seq('"', /(?:[^"\\]|\\.)*/, '"'),
    comment: $ => token(choice(
      seq('--', /.*/),
      seq(
        '(*',
        repeat(choice(
          /[^)]/,
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
