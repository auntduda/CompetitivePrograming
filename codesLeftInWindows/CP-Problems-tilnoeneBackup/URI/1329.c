#include <stdio.h>

int main(){
    int n, v, i;
    
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        int maria = 0, joao = 0;
        
        for(i = 0; i < n; i++){
            scanf("%d", &v);
            if(v == 0) maria++;
            else joao++;
        }
        
        printf("Mary won %d times and John won %d times\n", maria, joao);
    }
    
    return 0;
}