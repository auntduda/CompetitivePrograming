var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n = parseInt(lines.shift()), s=0, r=0, c=0;

for(i=0;i<n;i++){
    ns = lines.shift().split(' ');
    v = parseInt(ns[0]);
    animal = ns[1];

    if(animal=='C'){
        c+=v;
    } else if(animal=='R'){
        r+=v;
    } else{
        s+=v;
    }
}
soma = c+r+s;
    
console.log("Total: "+(c+r+s)+" cobaias");
console.log("Total de coelhos: "+c);
console.log("Total de ratos: "+r);
console.log("Total de sapos: "+s);
console.log("Percentual de coelhos: "+((100*c)/soma).toFixed(2)+" %");
console.log("Percentual de ratos: "+((100*r)/soma).toFixed(2)+" %");
console.log("Percentual de sapos: "+((100*s)/soma).toFixed(2)+" %");