#include <stdio.h>

int main(){
    long long int m, n, fm, fn, i;
    while(scanf("%lld %lld", &m, &n)!=EOF){
        fm=1;
        fn=1;
        for(i=m;i>0;i--){
            fm*=i;
        }
        for(i=n;i>0;i--){
            fn*=i;
        }
        printf("%lld\n", fm+fn);
    }
}