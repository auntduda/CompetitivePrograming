var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

soma = 0
n = parseInt(lines.shift())

for(i = 0; i < n; i++){
    linha = lines.shift()
    ls = linha.split(' ')
    
    e = ls[0]
    v = parseInt(ls[1])
    
    if(e == "G"){
        soma-=v;
    } else{
        soma+=v;
    }
}
        
if(soma>=0){
    console.log("A greve vai parar.");
} else{ 
    console.log("NAO VAI TER CORTE, VAI TER LUTA!");
}
