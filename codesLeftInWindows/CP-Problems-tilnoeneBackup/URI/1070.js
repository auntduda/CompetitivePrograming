var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
n = parseInt(lines.shift());

if(n%2==0){
    n+=1;
}
        
for(i=n;i<n+12;i+=2){
    console.log(i);
}