var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')
    
var a = lines.shift()

console.log(a[3]+a[4]+'/'+a[0]+a[1]+'/'+a[6]+a[7])
console.log(a[6]+a[7]+'/'+a[3]+a[4]+'/'+a[0]+a[1])
console.log(a[0]+a[1]+'-'+a[3]+a[4]+'-'+a[6]+a[7])