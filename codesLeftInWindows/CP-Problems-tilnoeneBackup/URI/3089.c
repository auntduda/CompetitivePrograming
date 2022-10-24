#include <stdio.h>

int main(){
    long long n;
    while(1){
        scanf("%lld", &n);
        if(n==0) break;
        long long i, v[200010];
        for(i=0;i<n*2;i++) scanf("%lld", &v[i]);
        long long s1 = v[0]+v[2*n-1], s2 = v[n]+v[n-1];
        for(i=0;i<n;i++){
            if(v[i]+v[2*n-(i+1)]<s1) s1=v[i]+v[2*n-(i+1)];
            if(v[i]+v[2*n-(i+1)]>s2) s2=v[i]+v[2*n-(i+1)];
        }
        printf("%lld %lld\n", s2, s1);
        
    }

    return 0;
}