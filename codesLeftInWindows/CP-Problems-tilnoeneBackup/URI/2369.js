var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n = parseInt(lines.shift())

tot = 7

if(n >= 101){
    tot += (n-100)*5;
    n = 100;
}

if(n >= 31){
    tot += (n-30)*2;
    n = 30;
}

if(n >= 11){
    tot += (n-10);
    n = 10;
}
    
console.log(tot)
    