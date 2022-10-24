var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

i = 1

while(n = parseInt(lines.shift())){
    if(n == 0) break;
    
    console.log("Teste "+i)
    console.log(Math.pow(2, n)-1);
    console.log()
    
    i += 1
}
