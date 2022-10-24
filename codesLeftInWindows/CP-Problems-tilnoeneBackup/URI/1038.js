var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');
    
a = parseFloat(lines.shift());
b = parseFloat(lines.shift());

if(a==1){
    console.log("Total: R$", (b*4).toFixed(2));
}
else if(a==2){
    console.log("Total: R$", (b*4.5).toFixed(2));
}
else if(a==3){
    console.log("Total: R$", (b*5).toFixed(2));
}
else if(a==4){
    console.log("Total: R$", (b*2).toFixed(2));
}
else{
    console.log("Total: R$", (b*1.5).toFixed(2));
}