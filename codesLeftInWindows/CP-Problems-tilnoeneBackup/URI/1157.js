var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n = parseInt(lines.shift())
for(i=1;i<=n;i++){
    if(n%i==0){
        console.log(i)
    }
}
