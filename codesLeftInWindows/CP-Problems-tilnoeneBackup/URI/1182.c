#include <stdio.h>

int main(){
    int l, i, j;
    double valor, soma=0;
    char escolha;
    scanf("%d %c", &l, &escolha);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &valor);
            if(j==l){
                soma+=valor;
            }
        }
    }
    
    if(escolha=='S'){
        printf("%.1lf\n", soma);
    } else{
        printf("%.1lf\n", soma/12);
    }

    return 0;
}