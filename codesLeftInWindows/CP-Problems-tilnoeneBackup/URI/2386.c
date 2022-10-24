#include <stdio.h>

int main(){
    long long i, a, n, f, tot = 0;
    scanf("%lld %lld", &a, &n);
    for(i = 0; i < n; i++){
        scanf("%lld", &f);
        if(f*a >= 40000000) tot += 1;
    }
    
    printf("%lld\n", tot);
    
    return 0;
}