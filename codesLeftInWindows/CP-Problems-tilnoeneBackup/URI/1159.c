#include <stdio.h>

int main(){
    int n, i, soma;
    while(1){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        if(n%2!=0){
            n++;
        }
        soma=0;
        for(i=0;i<5;i++){
            soma+=n;
            n+=2;
        }
        printf("%d\n", soma);
    }

    return 0;
}