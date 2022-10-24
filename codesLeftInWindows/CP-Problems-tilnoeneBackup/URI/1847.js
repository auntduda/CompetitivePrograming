var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');
    
var a = parseInt(lines.shift());
var b = parseInt(lines.shift());
var c = parseInt(lines.shift());

feliz=false
    
if(a>b && b<=c) feliz=true
else if(b>a && c>b && c-b>=b-a) feliz=true
else if(a>b && b>c && b-c<a-b) feliz=true
else if(a==b && c>b) feliz=true
    
if(feliz) console.log(":)");
else console.log(":(");
