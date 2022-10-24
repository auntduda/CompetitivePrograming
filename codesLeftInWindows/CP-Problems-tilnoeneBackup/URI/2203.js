var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    xf = parseInt(ls[0])
    yf = parseInt(ls[1])
    xi = parseInt(ls[2])
    yi = parseInt(ls[3])
    vi = parseInt(ls[4])
    r1 = parseInt(ls[5])
    r2 = parseInt(ls[6])
    x = (xf-xi)*(xf-xi)
    y=(yf-yi)*(yf-yi);
    if(Math.sqrt(x+y)+vi*1.5>r1+r2){
        console.log("N")
    } else{
        console.log("Y")
    }
}
