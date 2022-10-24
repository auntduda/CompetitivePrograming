var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

pares=0

for(i=1;i<=5;i++){
    num = parseInt(lines.shift());
    if(num%2==0){
        pares++;
    }
}
    
console.log(pares + " valores pares");
