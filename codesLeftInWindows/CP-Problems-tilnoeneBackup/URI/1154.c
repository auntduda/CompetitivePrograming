#include <stdio.h>

int main(){
    int idade, n=0;
    double soma=0;
    while(1){
        scanf("%d", &idade);
        if(idade<0){
            break;
        }
        soma+=idade;
        n++;
    }
    printf("%.2lf\n", soma/n);

    return 0;
}