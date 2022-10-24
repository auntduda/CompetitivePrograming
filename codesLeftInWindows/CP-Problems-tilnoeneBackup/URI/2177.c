#include <stdio.h>
#define ll long long

ll dist(ll xa, ll ya, ll xb, ll yb){ // retorna distancia ao quadrado
    return (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb);
}

int main(){
    ll i, xi, yi, n, x, y, t, c = 1;
    scanf("%lld %lld %lld", &xi, &yi, &n);

    for(i = 0; i < n; i++){
        scanf("%lld %lld %lld", &x, &y, &t);
        
        ll ans = dist(xi, yi, x, y);

        if(ans < t*t){
            if(c != 1){
                printf(" ");
            }
            
            printf("%d", i+1);
            c += 1;
        }
    }
    
    if(c != 1){
        printf("\n");
    } else{
        printf("-1\n");
    }
    
    return 0;
}