var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n = parseInt(lines.shift()), vin=0, vout=0;
    
for(i=0;i<n;i++){
    v = parseInt(lines.shift());
    if(v>=10 && v<=20){
        vin++;
    } else{
        vout++;
    }
}
console.log(vin+" in");
console.log(vout+" out");