var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')

    x = parseInt(ls[0])
    y = parseInt(ls[1])
    m = parseInt(ls[2])

    for(i=0;i<m;i++){
        ls2 = lines.shift().split(' ');
        a = parseInt(ls2[0])
        b = parseInt(ls2[1])
        if((a<=x && b<=y) || (b<=x && a<=y)) console.log("Sim")
        else console.log("Nao")
    }
}
