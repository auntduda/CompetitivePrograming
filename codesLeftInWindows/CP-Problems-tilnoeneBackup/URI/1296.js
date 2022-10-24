var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    a = parseFloat(ls[0])
    b = parseFloat(ls[1])
    c = parseFloat(ls[2])

    raiz = 2*(a*a*b*b+b*b*c*c+c*c*a*a)-(a*a*a*a + b*b*b*b + c*c*c*c)
    
    if(raiz > 0) console.log((1/3.0 * Math.sqrt(raiz)).toFixed(3))
    else console.log("-1.000")

}
