var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

b=2
soma=1
for(a=3;a<=39;a+=2){
    c=a/b;
    soma+=c;
    b*=2;
}
console.log(soma.toFixed(2))
