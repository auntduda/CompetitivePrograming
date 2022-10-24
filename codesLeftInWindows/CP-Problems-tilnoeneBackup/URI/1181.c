#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char e[4];
    double soma = 0, valor;
    int i, j;
    
    scanf("%d %s", &n, e);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &valor);
            if(i==n){
                soma+=valor;
            }
        }
    }
    
    if(strcmp(e, "S")==0){
        printf("%.1f\n", soma);
    }else{
        printf("%.1f\n", soma/12);
    } 

    return 0;
}