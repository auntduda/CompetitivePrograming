#include <stdio.h>

#define MAX 1010

int main(){
    int n, v, ini;
    while(scanf("%d", &n) != EOF){
        if(n == 0) break;
        
        int i, a[60];
        
        for(i = 1; i <= n; i++){
            scanf("%d", &v);
            a[i] = v;
        }
        
        scanf("%d", &ini);
        
        int atual = ini;
        while(1){
            
            if(atual == a[atual]){
                printf("%d\n", atual);
                break;
            }
            
            atual = a[atual];
            
        }
    }
    
    return 0;   
}