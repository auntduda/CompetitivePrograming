var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');

a = parseInt(lines.shift())
b = parseInt(lines.shift())
q = parseInt(a/b)
r = a%b
        
if(r<0){
    if(q<0) q--
    else if(q>0) q++
    else{
        if(a-((q-1)*b)>=0){
            q--
        } else{
            q++
        }
    }
    r = a-(q*b)
}
        
console.log(q+" "+r)
