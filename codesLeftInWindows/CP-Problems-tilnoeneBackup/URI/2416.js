var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

ls = lines.shift().split(' ')
console.log(parseInt(ls[0]) % parseInt(ls[1]))
