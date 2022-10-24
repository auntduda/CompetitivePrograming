var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
for(i=0;i<100;i++){
    v = parseFloat(lines.shift());
    if(v<=10){
        console.log("A["+i+"] = "+v.toFixed(1));
    }
}