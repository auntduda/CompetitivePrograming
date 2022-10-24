var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    if(linha == "0") break
    
    ls = linha.split(' ')
    
    q = parseInt(ls[0])
    d = parseInt(ls[1])
    p = parseInt(ls[2])

    pg = (q*d*p)/(p-q);
    res = ""
    
    res += Math.floor(pg);
            
    if(Math.floor(pg) == 1) res += " pagina"
    else res += " paginas"
    
    console.log(res)
}
