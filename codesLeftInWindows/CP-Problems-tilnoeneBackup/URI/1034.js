var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

alc=0
gas=0
die=0

while(true){
    e = parseInt(lines.shift())
    if(e==4){
        break
    } else if(e==1){
        alc++
    } else if(e==2){
        gas++
    } else if(e==3){
        die++
    }
}
console.log("MUITO OBRIGADO")
console.log("Alcool: "+ alc)
console.log("Gasolina: "+ gas)
console.log("Diesel: "+ die)