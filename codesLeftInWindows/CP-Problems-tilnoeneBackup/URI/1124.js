var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    l = parseInt(ls[0])
    c = parseInt(ls[1])
    ra = parseInt(ls[2])
    rb = parseInt(ls[3])

    if(l == 0 && c == 0 && ra == 0 && rb == 0) break;
            
    cxa = ra;
    cya = c-ra;
            
    cxb = l-rb;
    cyb = rb;

    if(ra*2 <= l && ra*2 <= c && rb*2 <= l && rb*2 <= c){
        if((cxa - cxb) * (cxa - cxb) + (cya - cyb) * (cya - cyb)  >= (ra + rb) * (ra + rb)) console.log("S");
        else console.log("N");
    } else console.log("N");

}
