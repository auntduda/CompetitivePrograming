var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    

while(true){
    ns = lines.shift().split(' ')
    a = parseInt(ns[0])
    if(a==0){
        break;
    }
    b = parseInt(ns[1])
    c = parseInt(ns[2])
    console.log((Math.floor(Math.sqrt((a*b)*(100.0/c)))).toFixed(0))
}
