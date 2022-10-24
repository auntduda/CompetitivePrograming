#include<stdio.h>

int main(){

    int doletas, cont=0;

    scanf("%d", &doletas);

    cont += doletas/100;
    doletas = doletas%100;

    cont += doletas/20;
    doletas = doletas%20;

    cont += doletas/10;
    doletas = doletas%10;

    cont += doletas/5;
    doletas = doletas%5;

    cont += doletas/1;
    doletas = doletas%1;

    printf("%d\n", cont);

    return 0;
    

}