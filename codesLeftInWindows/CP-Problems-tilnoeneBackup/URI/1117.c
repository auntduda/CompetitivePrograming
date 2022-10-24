#include <stdio.h>

int main(){
    double n1=-1, n2, nota;
    while(1){
        scanf("%lf", &nota);
        if(nota>=0 && nota<=10){
            if(n1<0){
                n1=nota;
            } else{
                n2=nota;
                break;
            }
        } else{
            puts("nota invalida");
        }
    }
    printf("media = %.2lf\n", (n1+n2)/2);

    return 0;
}