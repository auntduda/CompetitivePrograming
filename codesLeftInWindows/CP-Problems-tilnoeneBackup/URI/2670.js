var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function min(a, b){
    if(a > b){
        return b;
    } else{
        return a;
    }
}

a = new Array(3);
   
a[0] = parseInt(lines.shift());
a[1] = parseInt(lines.shift());
a[2] = parseInt(lines.shift());

t1=a[1]*2+a[2]*4;
t2=a[0]*2+a[2]*2;
t3=a[0]*4+a[1]*2;

console.log(min(min(t1, t2), t3))