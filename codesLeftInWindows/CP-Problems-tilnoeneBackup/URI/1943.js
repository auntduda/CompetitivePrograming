var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    n = parseInt(ls[0])

    res = "Top "
    if(n <= 1)  res += "1"
    else if(n <= 3) res += "3"
    else if(n <= 5) res += "5"
    else if(n <= 10) res += "10"
    else if(n <= 25) res += "25"
    else if(n <= 50) res += "50"
    else res += "100"

    console.log(res)
}
