var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    a = parseFloat(ls[0])
    b = parseFloat(ls[1])
    c = parseFloat(ls[2])
    d = parseFloat(ls[3])
    
    if(a*b == c*d){ 
        console.log("0");
    } else if(a*b < c*d){ 
        console.log("1");
    } else{ 
        console.log("-1");
    }

}
