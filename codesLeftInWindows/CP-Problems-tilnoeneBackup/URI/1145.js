var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split(' ')

x = parseInt(lines.shift())
y = parseInt(lines.shift())
res = ""

for(i=1;i<=y;i++){
    res+=i
    if(i%x==0 || i==y){
        console.log(res)
        res=""
    } else{
        res+=" "
    }
}