#include <stdio.h>

using namespace std;

int main(){
    int n, i, j;
    
    while(scanf("%d", &n) != EOF){
        int k = 1;
        
        for(i = 1; i <= n; i += 2){
            for(j = 0; j < n/2 - k + 1; j++) printf(" ");
            
            for(j = 0; j < i; j++){
                printf("*");
            }
            
            printf("\n");
            k++;
        }
        
        // caule
        for(j = 0; j < n/2; j++) printf(" ");
        printf("*");
        printf("\n");
        for(j = 0; j < n/2 - 1; j++) printf(" ");
        printf("***");
        printf("\n");
        printf("\n");
    }
    
    return 0;
}