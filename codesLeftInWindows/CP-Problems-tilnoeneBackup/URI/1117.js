var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n1=-1;
while(true){
    nota = parseFloat(lines.shift());
    if(nota>=0 && nota<=10){
        if(n1<0){
            n1=nota;
        } else{
            n2=nota;
            break;
        }
    } else{
        console.log("nota invalida");
    }
}
console.log("media =", ((n1+n2)/2).toFixed(2));
