#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    while(scanf("%d", &n) != EOF){
        
        int ini = 0, fim = sqrt(n), existe = 0;
        
        while(fim >= ini){
            int temp = ini * ini + fim * fim;
            
            if(temp == n){
                existe = 1;
                break;    
            } else if(temp < n)
                ini++;
            else
                fim--;
            
        }
        
        if(existe) printf("YES\n");
        else printf("NO\n");
        
    }
    
    return 0;
}