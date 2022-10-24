var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

function min(a, b){
    if(a < b) return a;
    return b;
}

function dentro(x, y, a, b){
    if(x <= a && y <= b) return true;
    return false;
}

ls = lines.shift().split(' ')

a1 = parseInt(ls[0])
b1 = parseInt(ls[1])
a2 = parseInt(ls[2])
b2 = parseInt(ls[3])
a = parseInt(ls[4])
b = parseInt(ls[5])

ans = false
c1x = b1 + a2;
c1y = min(a1, b2)

if(dentro(a, b, a1, b1) || dentro(b, a, a1, b1) || dentro(a, b, a2, b2) || dentro(b, a, a2, b2)){
        console.log("S");
        ans = true;
    } else if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
        console.log("S");
        ans = true;
    } else{
        c1x = a1 + b2;
        c1y = min(b1, a2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            console.log("S");
            ans = true;
        }
        
        c1x = a1 + a2;
        c1y = min(b1, b2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            console.log("S");
            ans = true;
        }
        
        c1x = b1 + b2;
        c1y = min(a1, a2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            console.log("S");
            ans = true;
        }
        
    }
    
    if(!ans) console.log("N");