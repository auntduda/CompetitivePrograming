var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
n = parseInt(lines.shift())
e = lines.shift()
soma=0.0
for(i=0;i<12;i++){
    for(j=0;j<12;j++){
        valor = parseFloat(lines.shift())
        if(i==n){
            soma+=valor;
        }
    }
}

if(e=='S'){
    console.log(soma.toFixed(1))
}else{
    console.log((soma/12).toFixed(1))
} 
