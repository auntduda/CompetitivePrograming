var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
while(true){
    n = parseInt(lines.shift());
    if(n==0){
        break
    }
    if(n%2!=0){
        n+=1
    }
    soma=0
    for(i=0;i<5;i++){
        soma+=n
        n+=2
    }
    console.log(soma)
}