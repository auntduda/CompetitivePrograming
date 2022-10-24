#include<stdio.h>

int main() {
    int t, v, i;
    while(1){
        scanf("%d", &t);
        if(t==0) break;
        for(i=0;i<t;i++){
            scanf("%d", &v);
            if(v%2==0) printf("%d\n", (v-1)*2);
            else printf("%d\n", (v*2-1));
        }
    }
    
    return 0;
}