var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n = parseInt(lines.shift());

for(i=1;i<=n;i++){
    console.log(i+" "+i*i+" "+i*i*i);
    console.log(i+" "+(i*i+1)+" "+(i*i*i+1));
}