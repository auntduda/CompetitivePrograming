var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

a=0
elf=0
h=0
m=0
x=0

n = parseInt(lines.shift())
for(i=0;i<n;i++){
    nome = lines.shift()
    e = nome.split(' ')[1]
    if(e=='A') a++
    else if(e=='E') elf++
    else if(e=='H') h++
    else if(e=='M') m++
    else x++
}
console.log(x+" Hobbit(s)")
console.log(h+" Humano(s)")
console.log(elf+" Elfo(s)")
console.log(a+" Anao(s)")
console.log(m+" Mago(s)")
