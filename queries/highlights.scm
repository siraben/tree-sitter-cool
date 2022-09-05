[
"if"
"then"
"else"
"fi"
"while"
"loop"
"pool"
"case"
"esac"
"new"
"isvoid"
"not"
"true"
"false"
"class"
"inherits"
"of"
"let"
"in"
 ] @keyword

(comment) @comment

(string) @string

(type) @type

(id) @variable.builtin

(int) @number

[ "(" ")" "{" "}" ] @punctuation.bracket

[ "." "," ";"]  @punctuation.delimiter

[ "+" "-" "*" "/" "=>" "<-" "=" "<=" "<" "~" ] @operator

(functionCall name: (_) @function.call)

(dispatch name: (_) @method.call)

(feature (method name: (_) @method))

