var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var a = parseInt(lines.shift());

if(a % 2 == 0) console.log(a+2)
else console.log(a+1)