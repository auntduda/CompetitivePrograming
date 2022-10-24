var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

renda = parseFloat(lines.shift());

if(renda<=2000){
    console.log("Isento");
} else{
    if(renda<=3000){
        console.log("R$", ((8*(renda-2000))/100).toFixed(2));
    } else{
        if(renda<=4500){
            console.log("R$", ((18*(renda-3000))/100+80).toFixed(2));
        } else{
            console.log("R$", ((28*(renda-4500))/100+270+80).toFixed(2));
        }
    }
}
