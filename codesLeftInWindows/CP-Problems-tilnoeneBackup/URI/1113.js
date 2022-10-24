var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while(true){
    ns = lines.shift().split(' ')

    x = parseInt(ns[0])
    y = parseInt(ns[1])
    if(x==y){
        break;
    }
    if(x>y){
        console.log("Decrescente")
    } else{
        console.log("Crescente")
    }
}