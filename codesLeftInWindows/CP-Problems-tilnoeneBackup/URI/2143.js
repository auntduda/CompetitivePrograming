var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while(1){
    t = parseInt(lines.shift());
    if(t==0) break;
    for(i=0;i<t;i++){
        v = parseInt(lines.shift());
        if(v%2==0) console.log((v-1)*2);
        else console.log((v*2-1));
    }
}