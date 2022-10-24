var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

l = lines.shift()
console.log((l.charCodeAt(0))-64)