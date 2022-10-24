var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n = parseInt(lines.shift())
for(i=0;i<n;i++){
    maria = 0;
    joao = 0;
    for(j=0;j<3;j++){
        ls = lines.shift().split(' ')
        x = parseInt(ls[0])
        d = parseInt(ls[1])
        joao+=x*d
    }
    for(j=3;j<6;j++){
        ls = lines.shift().split(' ')
        x = parseInt(ls[0])
        d = parseInt(ls[1])
        maria+=x*d
    }
    if(joao>maria){
        console.log("JOAO")
    } else{
        console.log("MARIA")
    }
}