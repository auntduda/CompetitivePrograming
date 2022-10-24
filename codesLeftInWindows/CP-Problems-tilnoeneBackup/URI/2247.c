#include <stdio.h>

int main(){
    int k = 1, n, i;
    while(scanf("%d", &n) != EOF){
        if(n == 0) break;
        
        printf("Teste %d\n", k);
        int v1, v2, a = 0, b = 0, resto = 0;
        for(i = 0; i < n; i++){
            scanf("%d %d", &v1, &v2);
            
            a += v1;
            b += v2;
            printf("%d\n", a-b);
        }
        printf("\n");
        k++;
    }
    
    return 0;
}