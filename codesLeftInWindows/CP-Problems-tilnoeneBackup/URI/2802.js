var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var n = parseInt(lines.shift());

console.log(1+((n*(n-1)/2)+((n*(n-1)*(n-2)*(n-3))/24)));