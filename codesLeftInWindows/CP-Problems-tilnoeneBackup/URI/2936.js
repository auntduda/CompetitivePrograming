var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

p1 = parseInt(lines.shift())
p2 = parseInt(lines.shift())
p3 = parseInt(lines.shift())
p4 = parseInt(lines.shift())
p5 = parseInt(lines.shift())

console.log(p1*300+p2*1500+p3*600+p4*1000+p5*150+225)
