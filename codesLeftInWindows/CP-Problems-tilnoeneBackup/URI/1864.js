var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n = parseInt(lines.shift())
frase = "LIFE IS NOT A PROBLEM TO BE SOLVED"

ans = "";
for(i=0;i<n;i++){
    ans += frase[i];
}

console.log(ans)