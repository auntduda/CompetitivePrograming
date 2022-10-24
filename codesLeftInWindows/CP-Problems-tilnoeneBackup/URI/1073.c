#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);
    
    int fim = n;
    if(n%2!=0){
        fim=n-1;
    }

    for(i=2;i<=fim;i+=2){
        printf("%d^2 = %d\n", i, i*i);
    }

    return 0;
}