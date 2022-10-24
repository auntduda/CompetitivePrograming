#include <stdio.h>

int main(){
    double valor, n=0;
    int positivos=0, i;

    for(i=1;i<=6;i++){
        scanf("%lf", &valor);
        if(valor>0){
            positivos++;
            n+=valor;
        }
    }

    printf("%d valores positivos\n%.1lf\n", positivos, n/positivos);

    return 0;
}