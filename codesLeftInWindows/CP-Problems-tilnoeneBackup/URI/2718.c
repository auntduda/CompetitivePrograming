#include <stdio.h>

int main(){
    long long n, um=0;
    scanf("%lld", &n);
    
    while(n--){
        long long v, um = 0, maior=0;
        scanf("%lld", &v);
        int seq = 1;
        
        while(v>0){
            if(v%2!=0){
                um++;
                seq = 1;
                if(seq == 1 && um>maior) maior=um;
            } else{
                seq=0;
                um = 0;
            }
            v>>=1;
        }
        
        printf("%lld\n", maior);
    }
    return 0;
}