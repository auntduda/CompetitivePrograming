#include <stdio.h>

int main(){
    int n, i, v, soma=0;
    char e;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf(" %c %d", &e, &v);
        
        if(e == 'G'){
            soma-=v;
        } else{
            soma+=v;
        }
    }
    if(soma>=0){
        printf("A greve vai parar.\n");
    } else{
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    }

    return 0;
}