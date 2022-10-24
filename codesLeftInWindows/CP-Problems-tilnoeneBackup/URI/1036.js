var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');
    
a = parseFloat(lines.shift());
b = parseFloat(lines.shift());
c = parseFloat(lines.shift());

delta = b*b-4*a*c;

if(delta<0 || a==0){ 
        console.log("Impossivel calcular");
    }
    else{ 
        console.log("R1 = " + ((-b+Math.sqrt(delta))/(2*a)).toFixed(5))
        console.log("R2 = " + ((-b-Math.sqrt(delta))/(2*a)).toFixed(5))
    }