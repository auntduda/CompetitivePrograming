#include <stdio.h>

int main() {
    int n, i;
    while(scanf("%d", &n)!=EOF){
        int f=0, c=0, v;
        for(i=0;i<n;i++){
            scanf("%d", &v);
            if(v==1) f++;
        }
        if(f>=(2/3.0)*n) printf("impeachment\n");
        else printf("acusacao arquivada\n");
    }
    
    return 0;
}