var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')
    
n = parseInt(lines.shift())

for(i=0;i<n;i++){
    ns = lines.shift().split(' ')
    a = parseInt(ns[0])
    b = parseInt(ns[1])
    c = parseInt(ns[2])
    if(a>=200 && a<=300 && b>=50 && c>=150){
        console.log("Sim")
    } else{
        console.log("Nao")
    }
}
