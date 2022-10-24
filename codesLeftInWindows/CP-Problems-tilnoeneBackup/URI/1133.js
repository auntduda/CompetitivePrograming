var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

x = parseInt(lines.shift())
y = parseInt(lines.shift())

if(x>y){
    temp=x
    x=y
    y=temp
}
for(i=x+1;i<y;i++){
    if(i%5==2 || i%5==3){
        console.log(i)
    }
}