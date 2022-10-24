#include <stdio.h>

int main(){
    
    int n, k, p;
    while(1){
        scanf("%d %d", &n, &k);
        if(n == 0 && k == 0) break;
        
        int i, perg[110] = {}, freq = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &p);
            perg[p]++;
        }
        
        for(i = 1; i <= 100; i++){
            if(perg[i] >= k) freq++;
        }
        
        printf("%d\n", freq);
    }

    return 0;
}