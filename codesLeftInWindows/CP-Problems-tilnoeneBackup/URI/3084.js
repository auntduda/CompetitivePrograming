var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    h = parseInt(ls[0])/30
    m = parseInt(ls[1])/6
    res=""
    if(h<10){
        res+="0"
    }
    res+=h+":"
    if(m<10){
        res+="0"
    }
    res+=m
    console.log(res)
}
