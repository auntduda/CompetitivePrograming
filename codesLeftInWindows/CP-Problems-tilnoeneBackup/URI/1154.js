var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n=0
soma=0
while(true){
    idade = parseInt(lines.shift())
    if(idade<0){
        break
    }
    soma+=idade
    n++
}
console.log((soma/n).toFixed(2))