var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var nome = lines.shift();
var a = parseInt(lines.shift());
var b = parseFloat(lines.shift());

console.log('TOTAL = R$ ' + (a+0.15*b).toFixed(2));