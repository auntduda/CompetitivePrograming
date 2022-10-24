var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
m1=0
m2=0
m3=0
m4=0
n = parseInt(lines.shift())
vs = lines.shift().split(' ')

for(i=0;i<n;i++){
    v = parseInt(vs[i])
    if(v%2==0){
        m1=m1+1
    }
    if(v%3==0){
        m2=m2+1
    }
    if(v%4==0){
        m3=m3+1
    }
    if(v%5==0){
        m4=m4+1
    }
}

console.log(m1+" Multiplo(s) de 2")
console.log(m2+" Multiplo(s) de 3")
console.log(m3+" Multiplo(s) de 4")
console.log(m4+" Multiplo(s) de 5")