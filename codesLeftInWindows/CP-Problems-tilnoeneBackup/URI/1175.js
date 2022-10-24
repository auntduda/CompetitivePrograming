var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    

n = new Array(32)
for(i=0;i<20;i++){
    n[i] = parseInt(lines.shift())
}
for(i=0;i<20;i++){
    console.log("N["+i+"] = "+n[19-i])
}