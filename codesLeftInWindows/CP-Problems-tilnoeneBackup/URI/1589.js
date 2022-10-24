var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n = parseInt(lines.shift())

for(i=0;i<n;i++){
    linha = lines.shift()
    ls = linha.split(' ')
    
    r1 = parseInt(ls[0])
    r2 = parseInt(ls[1])
    
    console.log(r1+r2)
}