#include <stdio.h>

int main(){
    double v1, v2;
    scanf("%lf %lf", &v1, &v2);
    printf("%.2lf%\n", (v2*100)/v1-100);

    return 0; 
}