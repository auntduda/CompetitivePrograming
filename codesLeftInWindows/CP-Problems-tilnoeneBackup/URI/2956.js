var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
ns = lines.shift().split(' ')
a = parseFloat(ns[0])
b = parseFloat(ns[1])

console.log("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = "+((a*b)/2).toFixed(5)+".");