var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n = parseInt(lines.shift());
        
for(i=0;i<n;i++){
    ns = lines.shift().split(' ')
    x = parseInt(ns[0])
    y = parseInt(ns[1])
    if(y==0){
        console.log("divisao impossivel");
    } else{
        console.log((x/y).toFixed(1));
    }
}