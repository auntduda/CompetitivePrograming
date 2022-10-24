var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

pos=0
neg=0
par=0
imp=0

for(i=0;i<5;i++){
    a = parseInt(lines.shift());
    if(a>0){
        pos++;
    } else if(a<0){
        neg++;
    }
    if(a%2==0){
        par++;
    } else{
        imp++;
    }
}
console.log(par+" valor(es) par(es)");
console.log(imp+" valor(es) impar(es)");
console.log(pos+" valor(es) positivo(s)");
console.log(neg+" valor(es) negativo(s)");
