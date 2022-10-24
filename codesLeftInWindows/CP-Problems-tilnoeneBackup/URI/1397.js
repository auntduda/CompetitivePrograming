var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(true){
    linha = lines.shift()
    n = parseInt(linha)
    
    if(n == 0) break
    
    a = 0
    b = 0
    for(i = 0; i < n; i++){
        ls = lines.shift().split(' ')
        v1 = parseInt(ls[0])
        v2 = parseInt(ls[1])
        
        if(v1 > v2) a++
        else if(v1 < v2) b++
        
    }
    
    console.log(a + ' ' + b)
   
}
