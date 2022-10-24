var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n = parseInt(lines.shift())
nums = lines.shift().split(' ')
menor = parseInt(nums[0])
pos=1

for(i=1;i<n;i++){
    if(parseInt(nums[i])<menor){
        menor = parseInt(nums[i])
        pos=i
    }
}
console.log("Menor valor: "+ menor);
console.log("Posicao: "+pos);