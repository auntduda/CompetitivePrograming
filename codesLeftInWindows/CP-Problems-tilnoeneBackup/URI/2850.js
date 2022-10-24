var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(pal = lines.shift()){
    if(pal=="esquerda") console.log("ingles");
    else if(pal=="direita") console.log("frances");
    else if(pal=="nenhuma") console.log("portugues");
    else console.log("caiu");
}
