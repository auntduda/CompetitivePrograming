var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    n = parseInt(linha)
    console.log(Math.ceil(n/100.0))
}
