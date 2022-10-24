var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n = parseInt(lines.shift())
h=0
m=0

for(i=0;i<n;i++){
    sexo = lines.shift().split(' ')
    if(sexo[1]=="F") m+=1
    else h+=1
}
console.log(h+" carrinhos")
console.log(m+" bonecas")
