#include <stdio.h>

int main(){
    double a, b=2, c, soma=1.0;
    for(a=3;a<=39;a+=2){
        c=a/b;
        soma+=c;
        b*=2;
    }
    printf("%.2lf\n", soma);

    return 0;
}