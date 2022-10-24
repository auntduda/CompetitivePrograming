#include <stdio.h>
#include <math.h>

int main(){
    int n, i;
    long long j;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        long long v;
        scanf("%lld", &v);
        int primo = 1;
        if(v==2) primo = 1;
        else if(v%2==0) primo = 0;
        else{
            for(j=3;j<=sqrt(v);j+=2){
                if(v % j == 0){
                    primo = 0;
                    break;
                }
            }
        }
        if(primo == 1) printf("Prime\n");
        else printf("Not Prime\n");
    }

    return 0;
}