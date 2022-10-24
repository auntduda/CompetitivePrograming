var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    a = parseInt(ls[0])
    b = parseInt(ls[1])

    if(a == 0) console.log("C");
    else{
        if(b == 0) console.log("B");
        else console.log("A");
    }
}
