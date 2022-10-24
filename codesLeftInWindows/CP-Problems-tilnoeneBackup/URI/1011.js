var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var r = parseInt(lines.shift());

console.log('VOLUME = ' + (r*r*r*3.14159*4/3.0).toFixed(3));