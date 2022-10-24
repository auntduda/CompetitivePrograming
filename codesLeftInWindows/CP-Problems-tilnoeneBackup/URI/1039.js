var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    r1 = parseFloat(ls[0])
    x1 = parseFloat(ls[1])
    y1 = parseFloat(ls[2])
    r2 = parseFloat(ls[3])
    x2 = parseFloat(ls[4])
    y2 = parseFloat(ls[5])

    d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)

    if(d <= r1*r1 && Math.sqrt(d)+r2 <= r1) console.log("RICO")
    else console.log("MORTO")

}
