var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var n = parseInt(lines.shift());

console.log(Math.trunc(n/3600)+":"+Math.trunc((n%3600)/60)+":"+Math.trunc((n%3600)%60))