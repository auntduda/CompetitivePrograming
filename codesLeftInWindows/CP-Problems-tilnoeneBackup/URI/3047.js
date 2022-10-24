var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

m = parseInt(lines.shift())
a = parseInt(lines.shift())
b = parseInt(lines.shift())
c = m-a-b

if(a>b){
    if(a>c){
        console.log(a)
    } else{
        console.log(c)
    }
} else{
    if(b>c){
        console.log(b)
    } else{
        console.log(c)
    }
}
