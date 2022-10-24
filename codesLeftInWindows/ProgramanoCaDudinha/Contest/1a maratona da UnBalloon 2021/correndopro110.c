#include<stdio.h>

int main(){

    int pessoas, fila, pps, alberto, disponivel=50;

    scanf("%d %d %d %d", &pessoas, &fila, &pps, &alberto);

    disponivel = disponivel-pessoas-fila;

    int antes_alberto=pps*alberto;

    disponivel=disponivel-antes_alberto;

    if(disponivel>0)
        printf("CORRE ALBERTO!\n");
    else
        printf("Cara, desiste\n");

    return 0;



}