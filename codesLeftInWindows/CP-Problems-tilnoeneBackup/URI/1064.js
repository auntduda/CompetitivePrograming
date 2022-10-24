var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n=0
positivos=0

for(i=1;i<=6;i++){
    valor = parseFloat(lines.shift());
    if(valor>0){
        positivos++;
        n+=valor;
    }
}

console.log(positivos + " valores positivos");
console.log((n/positivos).toFixed(1));