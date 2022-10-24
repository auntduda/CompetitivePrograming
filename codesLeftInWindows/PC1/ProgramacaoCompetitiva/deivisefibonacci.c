#include<stdio.h>

int main(){

    int i=0, fib, primeiro=0, segundo=1, pos;

    scanf("%d", &pos);

    while(i != pos){
        fib=primeiro+segundo;
        primeiro=segundo;
        segundo=fib;

        i++;
    }

    printf("%d\n", primeiro);

    return 0;
}