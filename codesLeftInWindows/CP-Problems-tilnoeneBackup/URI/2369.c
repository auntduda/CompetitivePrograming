#include <stdio.h>

int main(){
    int n, tot = 7;
    scanf("%d", &n);
    
    if(n >= 101){
        tot += (n-100)*5;
        n = 100;
    }
    
    if(n >= 31){
        tot += (n-30)*2;
        n = 30;
    }
    
    if(n >= 11){
        tot += (n-10);
        n = 10;
    }
    
    printf("%d\n", tot);
    
    return 0;
}