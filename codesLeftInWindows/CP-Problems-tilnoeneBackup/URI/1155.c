#include <stdio.h>

int main(){
    double soma=0, divisao, i;
    for(i=1;i<=100;i++){
        divisao=1/i;
        soma+=divisao;
    }
	printf("%.2lf\n", soma);

    return 0;
}