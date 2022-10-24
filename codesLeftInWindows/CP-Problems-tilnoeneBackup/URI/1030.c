#include <stdio.h>

int main(){
    int nc, n, k, mortos, i, j;
    scanf("%d", &nc);
    for(i = 1; i <= nc; i++){
        scanf("%d %d", &n, &k);
        int it = k, c = k, p[10010] = {};
        mortos = 0;
        
        if(it > n) it %= n;
        
        while(mortos != n-1){
            if(p[it] == 0){
                if(c == k){
                    p[it] = 1;
                    mortos++;
                    c = 0;
                }
                
                c++;
            }
            
            it++;
            if(it > n) it = 1;
        }
        
        printf("Case %d: ", i);
        for(j = 1; j <= n; j++){
            if(p[j] == 0){
                printf("%d\n", j);
                break;
            }
        }
        
    }
    
    
    return 0;
}