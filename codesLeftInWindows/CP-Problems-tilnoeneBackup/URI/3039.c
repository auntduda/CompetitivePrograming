#include<stdio.h>

int main() {
    int n, h=0, m=0, i;
    char nome[128], sexo[1];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s %c", nome, sexo);
        if(*sexo=='F') m++;
        else h++;
        
    }
    printf("%i carrinhos\n%i bonecas\n", h, m);
    
    return 0;
}