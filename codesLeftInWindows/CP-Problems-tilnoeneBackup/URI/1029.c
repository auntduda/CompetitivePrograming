#include <stdio.h>

int ch;

int fib(int n){
    ch += 1;
    if(n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main(){
    int n, nc;
    scanf("%d", &nc);
    
    while(nc--){
        scanf("%d", &n);
        
        ch = -1;
        int ans = fib(n);
        printf("fib(%d) = %d calls = %d\n", n, ch, ans);

    }
    
    return 0;
}