#include <stdio.h>

int main(){
    long long int m, n, fm, fn;
    while(scanf("%lld %lld", &m, &n)!=EOF){
        fm=1;
        fn=1;
        for(int i=m;i>0;i--){
            fm*=i;
        }
        for(int i=n;i>0;i--){
            fn*=i;
        }
        printf("%lld\n", fm+fn);
    }
}