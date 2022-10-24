#include <stdio.h>

int main(){
    double renda;
    scanf("%lf", &renda);

    if(renda<=2000){
        puts("Isento");
    } else{
        if(renda<=3000){
            printf("R$ %.2lf\n", (8*(renda-2000))/100);
        } else{
            if(renda<=4500){
                printf("R$ %.2lf\n", (18*(renda-3000))/100+80);
            } else{
                printf("R$ %.2lf\n", (28*(renda-4500))/100+270+80);
            }
        }
    }

    return 0;
}