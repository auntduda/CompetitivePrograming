#include <stdio.h>

int main(){
    int n, v, s=0, r=0, c=0, i;
    char animal;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %c", &v, &animal);
        if(animal=='C'){
            c+=v;
        } else if(animal=='R'){
            r+=v;
        } else{
            s+=v;
        }
    }
    double soma = c+r+s;

    printf("Total: %d cobaias\n", c+r+s);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f \%\n", (100*c)/soma);
    printf("Percentual de ratos: %.2f \%\n", (100*r)/soma);
    printf("Percentual de sapos: %.2f \%\n", (100*s)/soma);

    return 0;
}