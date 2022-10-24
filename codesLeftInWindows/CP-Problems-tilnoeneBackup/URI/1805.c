#include <stdio.h>
#define ll long long

int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);
    
    printf("%lld\n", ((b-a+1)*(a+b))/2);
    
    return 0;
}
