var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    a = 0
    b = 0
    for(i = 0; i < 16; i++){
        if(ls[i] == '1') a = i+1;
        else if(ls[i] == '9') b = i+1;
    }
        
    if((a <= 8 && b >= 9) || (b <= 8 && a >= 9)){
        console.log("final");
    } else if((a % 2 == 0 && b == a-1) || (b % 2 == 0 && a == b-1)){
        console.log("oitavas");
    } else if((a <= 12 && b >= 13) || (a >= 13 && b <= 12) || (a <= 4 && b >= 5) || (a >= 5 && b <= 4)){
        console.log("semifinal");
    } else{
        console.log("quartas");
    }
}
