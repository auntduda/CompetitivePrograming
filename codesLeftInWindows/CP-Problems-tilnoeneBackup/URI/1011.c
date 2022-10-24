#include<stdio.h>

int main() {
    double r;
    scanf("%lf", &r);
    printf("VOLUME = %.3lf\n", r*r*r*3.14159*(4/3.0));
    
    return 0;
}