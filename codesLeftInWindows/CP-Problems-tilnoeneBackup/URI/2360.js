var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n = parseInt(lines.shift())
for(i=0;i<n;i++){
    e = lines.shift()
    ns = lines.shift().split(' ')
    r = parseInt(ns[0])
    g = parseInt(ns[1])
    b = parseInt(ns[2])
    if(e=="min"){
       if(r<g){
            if(r<b){
                res = r
            } else{
                res = b
            }
        } else{
            if(g<b){
                res = g
            } else{
                res = b
            }
        }
    } else if(e=="mean"){
        res = ((r+g+b)/3)
    } else if(e=="max"){
        if(r>g){
            if(r>b){
                res = r
            } else{
                res = b
            }
        } else{
            if(g>b){
                res = g
            } else{
                res = b
            }
        }
    } else{
        res = ((0.3*r)+(0.59*g)+(0.11*b))
    }
    console.log("Caso #"+(i+1)+": "+Math.floor(res))
}
