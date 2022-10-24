var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')
    
t = parseInt(lines.shift())
for(i=0;i<t;i++){
    ns = lines.shift().split(' ')
    pa = parseInt(ns[0])
    pb = parseInt(ns[1])
    g1 = parseFloat(ns[2])
    g2 = parseFloat(ns[3])
    anos=0
    while(true){
        if(anos>100 || pa>pb){
            break
        }
        pa+=Math.floor(pa*g1/100)
        pb+=Math.floor(pb*g2/100)
        anos++
    }
    if(anos>100){
        console.log("Mais de 1 seculo.")
    } else{
        console.log(anos+" anos.")
    }
}