var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split(' ')

soma=0
a = parseInt(lines.shift())
n = parseInt(lines.shift())
while(n<=0){
    n = parseInt(lines.shift())
}
for(i=0;i<n;i++){
    soma+=a+i
}
console.log(soma)
