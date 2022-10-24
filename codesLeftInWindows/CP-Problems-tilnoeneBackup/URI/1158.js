var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
n = parseInt(lines.shift())

for(i=0;i<n;i++){
    ns = lines.shift().split(' ')
    x = parseInt(ns[0])
    y = parseInt(ns[1])
    if(x%2==0){
        x++
    }
    soma=0
    for(j=0;j<y;j++){
        soma+=x
        x+=2
    }
    console.log(soma)
}
