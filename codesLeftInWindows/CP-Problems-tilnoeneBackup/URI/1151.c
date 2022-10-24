#include <stdio.h>

int main(){
    int i, n, a1, a2, soma, fib[64]={};
    fib[0] = 0;
    fib[1] = 1;
    scanf("%d", &n);
    for(i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(i=0;i<n;i++){
        printf("%d", fib[i]);
        if(i==n-1){
            printf("\n");
        } else{
            printf(" ");
        }
    }
    
    return 0;
}