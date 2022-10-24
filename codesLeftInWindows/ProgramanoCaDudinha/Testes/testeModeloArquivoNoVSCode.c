#include<stdio.h>

int main(){

    int fib, i=0, primeiro=1, segundo=1, terceiro=2;

    printf("%d\n%d\n%d\n", primeiro, segundo, terceiro);

    while(i < 38){
        fib = primeiro + segundo;

        primeiro = segundo;
        segundo = fib;

        fib = primeiro + segundo;

        printf("%d\n", fib);

        i += 1;

    }

    return 0;
}