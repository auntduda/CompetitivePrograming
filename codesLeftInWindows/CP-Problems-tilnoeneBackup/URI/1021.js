var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
a = parseFloat(lines.shift());
n = parseInt(a)
console.log("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00", parseInt(n/100), parseInt((n%100)/50), parseInt(((n%100)%50)/20), parseInt((((n%100)%50)%20)/10), parseInt(((((n%100)%50)%20)%10)/5), parseInt((((((n%100)%50)%20)%10)%5)/2))
v = parseInt(a*100-n*100)
console.log("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01", parseInt((((((n%100)%50)%20)%10)%5)%2), parseInt(v/50), parseInt((v%50)/25), parseInt(((v%50)%25)/10), parseInt((((v%50)%25)%10)/5), parseInt((((v%50)%25)%10)%5));