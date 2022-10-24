#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    long long v[1000010], i, soma=0, maxdir=0;
    for(i=0;i<n;i++){
        scanf("%lld", &v[i]);
        soma+=v[i];
    }
    
    i=0;

    while(1){
        long long c = i;
        if(v[i]%2==0) i--;
        else i++;
        if(v[c]>0){
            v[c]--;
            soma--;
        }
        if(i<0 || i>=n) break;
        if(i>maxdir) maxdir=i;
    }
    
    printf("%lld %lld\n", maxdir+1, soma);
    
    return 0;
}