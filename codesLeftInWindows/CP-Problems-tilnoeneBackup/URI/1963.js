var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    a = parseFloat(ls[0])
    b = parseFloat(ls[1])

    console.log(((b*100)/a-100).toFixed(2).toString()+'%');
}
