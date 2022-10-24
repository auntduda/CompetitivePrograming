var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(true){
    n = parseInt(lines.shift())
    res = ""
    if(n==0){
        break
    }
    for(i=1;i<n;i++){
        res=res+i+" "
    }
    res=res+n
    console.log(res)
}