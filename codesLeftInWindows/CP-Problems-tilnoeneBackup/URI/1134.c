#include <stdio.h>

int main(){
    int e, alc=0, gas=0, die=0;
    while(1){
        scanf("%d", &e);
        if(e==4){
            break;
        } else if(e==1){
            alc++;
        } else if(e==2){
            gas++;
        } else if(e==3){
            die++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);

    return 0;
}