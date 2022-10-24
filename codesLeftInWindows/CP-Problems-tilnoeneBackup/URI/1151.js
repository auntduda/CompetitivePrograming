var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

fib = []
fib[0] = 0
fib[1] = 1
n = parseInt(lines.shift())
res = ""
for(i=2;i<n;i++){
    fib[i]=fib[i-1]+fib[i-2]
}
for(i=0;i<n;i++){
    res=res+fib[i]
    if(i==n-1){
        console.log(res)
    } else{
        res=res+" "
    }
}

