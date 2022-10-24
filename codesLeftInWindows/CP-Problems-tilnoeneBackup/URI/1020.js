var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var n = parseInt(lines.shift());

console.log(Math.trunc(n/365)+" ano(s)\n"+Math.trunc((n%365)/30)+" mes(es)\n"+Math.trunc((n%365)%30)+" dia(s)")