#include <stdio.h>

int main(){
    int n, k, v, i;
    
    scanf("%d", &n);
    while(n--){
        scanf("%d", &k);
        
        for(i = 0; i < k; i++){
            scanf("%d", &v);
            if(v == 1) printf("Rolien\n");
            else if(v == 2) printf("Naej\n");
            else if(v == 3) printf("Elehcim\n");
            else printf("Odranoel\n");
        }
    }
    
    return 0;
}