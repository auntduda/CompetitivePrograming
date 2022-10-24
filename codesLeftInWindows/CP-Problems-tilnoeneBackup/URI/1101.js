var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    

while(true){
    res = ""
    ns = lines.shift().split(' ')
    n = parseInt(ns[0])
    m = parseInt(ns[1])
    if(m<=0 || n<=0){
        break
    }
    if(m>n){
        temp=n
        n=m
        m=temp
    }
    soma=0
    for(i=m;i<=n;i++){
        soma+=i
        res+=i+" "
    }
    res+="Sum="+soma;
    console.log(res);
}