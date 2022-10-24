#include <stdio.h>
#include <string.h>
#define ll long long

const int MOD = 1000000007;

ll pot[1003] = {}; // verifica se na pos eh diferente de zero

ll binpow(ll a, ll b) {
    a %= MOD;
    long long res = 1;
    while (b > 0){
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    
    return res;
}

int main(){
    char num[1003];
    while(scanf("%s", num) != EOF){
    
        int i, tam = strlen(num);
        ll res = 0;
        
        for(i = 0; i < tam; i++){
            res = (res + ((((int)num[i] - 65) * binpow(26, tam-1-i))));
            res %= MOD;
        }
        
        printf("%lld\n", res);
    }
    
    return 0;
}