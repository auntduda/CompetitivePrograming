#include <stdio.h>
#include <stdlib.h>

int main(){
    long long n;
    while(scanf("%lld", &n) != EOF){
        long long i, trab[n];
        for(i=0;i<n;i++) scanf("%lld", &trab[i]);
        
        long long s1[n], s2[n];
        s1[0]=trab[0];
        s2[n-1]=trab[n-1];
        for(i=1;i<n;i++) s1[i]=s1[i-1]+trab[i];
        for(i=n-2;i>=0;i--) s2[i]=s2[i+1]+trab[i];
        
        long long menor=s2[0];
        for(i=1;i<n;i++){
            if(abs(s2[i]-s1[i-1])<menor && abs(s2[i]-s1[i-1])>=0) menor=abs(s2[i]-s1[i-1]);
        }
        printf("%d\n", menor);

    }
    
    return 0;
}