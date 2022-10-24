#include<stdio.h>

int escreve(double salario, int porcentagem){
    printf("Novo salario: %.2lf\n", (salario*(100+porcentagem))/100);
    printf("Reajuste ganho: %.2lf\n", (porcentagem*salario)/100);
}

int main(){
    double salario;
    scanf("%lf", &salario);

    if(salario<=400){
        escreve(salario, 15);
        printf("Em percentual: 15 %\n");
    } else if(salario<=800){
        escreve(salario, 12);
        printf("Em percentual: 12 %\n");
    } else if(salario<=1200){
        escreve(salario, 10);
        printf("Em percentual: 10 %\n");
    } else if(salario<=2000){
        escreve(salario, 7);
        printf("Em percentual: 7 %\n");
    } else {
        escreve(salario, 4);
        printf("Em percentual: 4 %\n");
    }

    return 0;
}