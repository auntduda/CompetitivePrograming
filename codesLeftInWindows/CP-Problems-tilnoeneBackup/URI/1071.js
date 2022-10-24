var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

x = parseInt(lines.shift()), y = parseInt(lines.shift()), soma=0;

if(x>y){
    temp=x;
    x=y;
    y=temp;
}
if(x%2==0){
    x++;
} else{
    x+=2;
}

for(i=x;i<y;i+=2){
    soma+=i;
}
console.log(soma);
