#include<stdio.h> /* gcc -stdc=c++04 -Wall*/
#include<string.h>

int main(){

    int valor, tamanho, soma=0;

    /*memset(vetor, 0, sizeof(int)*11);*/

    scanf("%d", &tamanho);

    for(int i=0; i<tamanho; i++){
        scanf("%d", &valor);

        soma = soma + valor;
    }

    printf("%d\n", soma);

    return 0;

}