var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    a = parseInt(ls[0])
    b = parseInt(ls[1])
   
    if(b >= 0 && b <= 2) console.log("nova");
    else if(b >= 97 && b <= 100) console.log("cheia");
    else{
        if(a > b) console.log("minguante");
        else console.log("crescente");
    }
}
