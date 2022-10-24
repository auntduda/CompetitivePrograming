var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

v = parseInt(lines.shift())
ant = v
for(i=0;i<10;i++){
    if(i!=0){
        ant = ant*2
    }
    console.log("N["+i+"] = "+ant)
}