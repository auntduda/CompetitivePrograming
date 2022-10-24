#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
        double raiz = 2*(a*a*b*b+b*b*c*c+c*c*a*a)-(a*a*a*a + b*b*b*b + c*c*c*c);
        
        if(raiz > 0) printf("%.3f\n", 1/3.0 * sqrt(raiz));
        else printf("%.3f\n", -1.0);
    }

    return 0;
}