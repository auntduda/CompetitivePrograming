#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    while(n--){
        int x, y;
        scanf("%d %d", &x, &y);
        
        int rafael = 9*x*x+y*y;
        int beto = 2*x*x+25*y*y;
        int carlos = -100*x+y*y*y;
        
        if(rafael > beto){
            if(rafael > carlos) printf("Rafael");
            else printf("Carlos");
        } else{
            if(beto > carlos) printf("Beto");
            else printf("Carlos");
        }
        
        printf(" ganhou\n");
        
    }
    
    return 0;
}