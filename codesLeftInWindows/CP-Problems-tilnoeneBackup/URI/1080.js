var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

maior = parseInt(lines.shift()), pos=1;
        
for(i=2;i<=100;i++){
    n = parseInt(lines.shift())
    if(n>maior){
        maior=n
        pos=i
    }
}
        
console.log(maior)
console.log(pos)
