#include <stdio.h>

int main(){
    int n, i, a=0, elf=0, h=0, m=0, x=0;
    char nome[128], e;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s %c", nome, &e);
        if(e=='A') a++;
        else if(e=='E') elf++;
        else if(e=='H') h++;
        else if(e=='M') m++;
        else x++;
    }
    printf("%d Hobbit(s)\n", x);
    printf("%d Humano(s)\n", h);
    printf("%d Elfo(s)\n", elf);
    printf("%d Anao(s)\n", a);
    printf("%d Mago(s)\n", m);

    return 0;
}