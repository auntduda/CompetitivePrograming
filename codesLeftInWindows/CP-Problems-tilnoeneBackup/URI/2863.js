var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    
    n = parseInt(linha)
    maior = parseFloat(lines.shift())
    
    for(i=1;i<n;i++){
        v = parseFloat(lines.shift())
        if(v<maior) maior=v
    }
    console.log(maior)

}
