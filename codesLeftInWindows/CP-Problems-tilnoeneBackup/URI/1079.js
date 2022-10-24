var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n = parseInt(lines.shift())

for(i=0;i<n;i++){
    ns = (lines.shift()).split(' ')
    a = parseFloat(ns[0])
    b = parseFloat(ns[1])
    c = parseFloat(ns[2])
    console.log(((a*2+b*3+c*5)/10).toFixed(1))
}
