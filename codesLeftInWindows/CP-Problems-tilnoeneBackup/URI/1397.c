#include <stdio.h>

int main(){
    int n, i;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        
        int j1 = 0, j2 = 0, a, b;
        
        for(i = 0; i < n; i++){
            scanf("%d %d", &a, &b); 
            if(a > b) j1++;
            else if(a < b) j2++;
        }
        
        printf("%d %d\n", j1, j2);
    }
    
    return 0;
}