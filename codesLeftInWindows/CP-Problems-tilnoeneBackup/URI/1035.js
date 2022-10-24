var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');
    
a = parseFloat(lines.shift());
b = parseFloat(lines.shift());
c = parseFloat(lines.shift());
d = parseFloat(lines.shift());

if(b>c && d>a && c+d>a+b && c>0 && d>0 && a%2==0){ 
        console.log("Valores aceitos");
    }
    else{ 
        console.log("Valores nao aceitos");
    }