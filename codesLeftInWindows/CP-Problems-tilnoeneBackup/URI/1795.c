#include <stdio.h>
#define ll long long

ll elevar(ll n, ll p){
    ll i, res = 1;
    for(i = 0; i < p; i++) res *= n;
    return res;
}

int main(){
    ll n;
    scanf("%lld", &n);
    
    printf("%lld\n", elevar(3, n));
    
    return 0;
}
