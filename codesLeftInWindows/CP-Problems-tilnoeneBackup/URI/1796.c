#include <stdio.h>

int main(){
    int n;
    
    while(scanf("%d", &n) != EOF){
        int i, sat = 0, ins = 0, op;
        
        for(i = 0; i < n; i++){
            scanf("%d", &op);
            if(op == 1) ins++;
            else sat++;
        }
        
        if(sat > ins) printf("Y\n");
        else printf("N\n");
    }
    
    return 0;
}
