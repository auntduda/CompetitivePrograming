#include <stdio.h>

void notas(){
    double n, x=-1, y;
    while(1){
        scanf("%lf", &n);
        if(n>=0 && n<=10){
            if(x==-1){
                x=n;
            } else{
                y=n;
                break;
            }
        } else{
            printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n", (x+y)/2);
}

int main(){ 
    int escolha=0;
    notas();
    while(escolha!=2){
        if(escolha!=1 && escolha!=2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &escolha);
        } else if(escolha==1){
            notas();
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &escolha);
        } else{
            break;
        }
    }

    return 0;
}