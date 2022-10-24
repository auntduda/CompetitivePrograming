var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while(true){
    ns = lines.shift().split(' ')
    x = parseInt(ns[0])
    y = parseInt(ns[1])
    if(x==0 || y==0){
        break;
    }
    if(x>0){
        if(y>0){
    		console.log("primeiro");
        } else{
    		console.log("quarto");
        }
    } else{
        if(y>0){
    		console.log("segundo");
        } else{
            console.log("terceiro");
        }
    }
}