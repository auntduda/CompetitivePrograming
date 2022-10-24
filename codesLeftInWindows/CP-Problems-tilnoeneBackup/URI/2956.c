#include <stdio.h>

int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5lf.\n",(a*b)/2);

    return 0;
}