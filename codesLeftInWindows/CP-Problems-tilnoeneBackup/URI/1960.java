#include <stdio.h>
#include <string.h>

int ctoi(char n){ return (int)n-48;}

void romano(int n, int c){ // digito(1-9) - casa(1-3)
    int i;
    if(c==1){ // U
        if(n==9) printf("IX");
        else if(n==4) printf("IV");
        else{
            if(n>=5){
                printf("V");
                n-=5;
            }
            for(i=0;i<n;i++) printf("I");
        }
    } else if(c==2){ // D
        if(n==9) printf("XC");
        else if(n==4) printf("XL");
        else{
            if(n>=5){
                printf("L");
                n-=5;
            }
            for(i=0;i<n;i++) printf("X");
        }
    } else{ // C
        if(n==9) printf("CM");
        else if(n==4) printf("CD");
        else{
            if(n>=5){
                printf("D");
                n-=5;
            }
            for(i=0;i<n;i++) printf("C");
        }
    }
}

int main(){
    char num[8];
    scanf("%s", num);
    int tam = strlen(num), zeros=1, i;
    for(i=1;i<tam;i++){
        zeros*=10;
    }
    
    for(i=0;i<tam;i++){
        romano(ctoi(num[i]), tam-i);
    }
    printf("\n");

    return 0;
}