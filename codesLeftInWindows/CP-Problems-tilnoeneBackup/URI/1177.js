var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

k=0
v = parseInt(lines.shift())
for(i=0;i<1000;i++){
    console.log("N["+i+"] = "+k);
    if(k==v-1){
        k=0;
    } else{
        k++;
    }
}