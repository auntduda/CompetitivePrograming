var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

    
    a = parseInt(lines.shift())
    b = parseInt(lines.shift())
    
    if((a <= 8 && b >= 9) || (b <= 8 && a >= 9)){
        console.log("final");
    } else if((a % 2 == 0 && b == a-1) || (b % 2 == 0 && a == b-1)){
        console.log("oitavas");
    } else if((a <= 12 && b >= 13) || (a >= 13 && b <= 12) || (a <= 4 && b >= 5) || (a >= 5 && b <= 4)){
        console.log("semifinal");
    } else{
        console.log("quartas");
    }

