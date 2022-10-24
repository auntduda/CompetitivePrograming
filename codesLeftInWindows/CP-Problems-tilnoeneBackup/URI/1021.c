#include<stdio.h>

int main() {
    double a;
    scanf("%lf", &a);
    int n = a;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", n/100, (n%100)/50, ((n%100)%50)/20, (((n%100)%50)%20)/10, ((((n%100)%50)%20)%10)/5, (((((n%100)%50)%20)%10)%5)/2);
    int v = a*100-n*100;
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", (((((n%100)%50)%20)%10)%5)%2, v/50, (v%50)/25, ((v%50)%25)/10, (((v%50)%25)%10)/5, (((v%50)%25)%10)%5);
    return 0;
}