var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

soma=0
i=0
x = parseInt(lines.shift())
while(true){
    z = parseInt(lines.shift())
    if(z>x){
        break
    }
}
while(soma<z){
    soma+=i+x
    i=i+1
}
console.log(i)
