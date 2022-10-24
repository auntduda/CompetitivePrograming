#include<stdio.h>

int main() {
    double c, f;
    int a, b, d, e;
    scanf("%d %d %lf %d %d %lf", &a, &b, &c, &d, &e, &f);
    printf("VALOR A PAGAR: R$ %.2lf\n", (e*f)+(b*c));

    return 0;
}