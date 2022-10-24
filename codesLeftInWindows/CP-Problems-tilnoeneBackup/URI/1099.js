var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
n = parseInt(lines.shift());
for(i=0;i<n;i++){
    s = lines.shift()
    ns = s.split(' ')
    x = parseInt(ns[0])
    y = parseInt(ns[1])
    si=0;
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    if(x%2==0){
        x++;
    } else{
        x+=2;
    }
    for(j=x;j<y;j+=2){
        si+=j;
    }
    console.log(si)
}