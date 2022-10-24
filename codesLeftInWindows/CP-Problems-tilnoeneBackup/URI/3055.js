var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')
    
a = parseInt(lines.shift())
m = parseInt(lines.shift())

console.log(2*m-a)