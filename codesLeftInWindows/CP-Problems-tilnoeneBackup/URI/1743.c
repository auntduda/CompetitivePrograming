#include <stdio.h>

int main(){
    int a[5], b[5], i;
    
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < 5; i++){
        scanf("%d", &b[i]);
    }
    
    for(i = 0; i < 5; i++){
        if(a[i] == b[i]){
            printf("N\n");
            return 0;
        }
    }
    
    printf("Y\n");
    
    return 0;
}