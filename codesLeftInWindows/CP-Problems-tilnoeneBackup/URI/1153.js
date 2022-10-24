var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n = parseInt(lines.shift())
soma=1
        
for(i=2;i<=n;i++){
    soma=soma*i
}
console.log(soma)