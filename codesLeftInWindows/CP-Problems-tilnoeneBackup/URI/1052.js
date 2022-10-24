var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
n = parseInt(lines.shift());

meses = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"];

console.log(meses[n-1]);