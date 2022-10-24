var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n = parseInt(lines.shift())
        
fim = n
if(n%2!=0){
    fim=n-1
}
    
for(i=2;i<=fim;i+=2){
    console.log(i+"^2 = "+i*i)
}
