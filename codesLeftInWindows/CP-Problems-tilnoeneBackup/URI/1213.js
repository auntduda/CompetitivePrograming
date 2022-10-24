var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    n = parseInt(linha)
    num = 1
    op = 1

    while(num%n!=0){
        num = (10*num+1)%n;
        op++;
    }
    
    console.log(op);
}
