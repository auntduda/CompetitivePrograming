var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
val = 0
for(i=0;i<6;i++){
    n = parseFloat(lines.shift());
    if(n>0){
        val++;
    }
}
console.log(val+" valores positivos");