var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

b=""
l="|"

for(i=0;i<39;i++){
    b=b+"-"
}

for(j=0;j<37;j++){
    l=l+" "
}
l=l+"|"

console.log(b)
console.log(l)
console.log(l)
console.log(l)
console.log(l)
console.log(l)
console.log(b)
