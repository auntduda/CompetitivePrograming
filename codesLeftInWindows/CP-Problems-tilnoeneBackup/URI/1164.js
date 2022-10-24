var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n = parseInt(lines.shift())
for(i=0;i<n;i++){
    x = parseInt(lines.shift())
    soma=0
    for(j=1;j<x;j++){
        if(x%j==0){
            soma+=j
        }
    }
    if(soma==x){
        console.log(x+" eh perfeito")
    } else{
        console.log(x+" nao eh perfeito")
    }
}
