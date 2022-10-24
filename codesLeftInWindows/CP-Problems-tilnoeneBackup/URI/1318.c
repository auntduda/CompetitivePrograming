#include <stdio.h>

int main(){
    int i, n, m, t;
    
    while(1){
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0) break;
        
        int v[10010] = {}, rep = 0;
        
        for(i = 0; i < m; i++){
            scanf("%d", &t);
            v[t]++;
        }
        
        for(i = 0; i < 10010; i++){
            if(v[i] > 1){
                rep++;
            }
        }
        
        printf("%d\n", rep);
    }
    
    return 0;
}