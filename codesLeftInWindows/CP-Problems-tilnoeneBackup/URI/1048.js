var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
salario = parseFloat(lines.shift());

function escreve(salario, porcentagem){
    console.log("Novo salario: " + ((salario*(100+porcentagem))/100).toFixed(2));
    console.log("Reajuste ganho: " + ((porcentagem*salario)/100).toFixed(2));
}

if(salario<=400){
    escreve(salario, 15);
    console.log("Em percentual: 15 %");
} else if(salario<=800){
    escreve(salario, 12);
    console.log("Em percentual: 12 %");
} else if(salario<=1200){
    escreve(salario, 10);
    console.log("Em percentual: 10 %");
} else if(salario<=2000){
    escreve(salario, 7);
    console.log("Em percentual: 7 %");
} else {
    escreve(salario, 4);
    console.log("Em percentual: 4 %");
}
