var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
for(i=0;i<10;i++){
    v = parseInt(lines.shift());
    if(v<=0){
        v=1;
    }
    console.log("X["+i+"] = "+v);
}