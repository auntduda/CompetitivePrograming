var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n = parseInt(lines.shift());
l=1
for(i=0;i<n;i++){
    console.log(l+" "+(l+1)+" "+(l+2)+" PUM");
    l+=4;
}