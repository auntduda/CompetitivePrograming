#include <stdio.h>

int main() {
    int q, d, p;
    
    while(1){
        scanf("%d", &q);
        if(q == 0) break;
        scanf("%d %d", &d, &p);
        
        int pg = (q*d*p)/(p-q);
        printf("%d", pg);
        
        if(pg == 1) printf(" pagina\n");
        else printf(" paginas\n"); 
        
    }
    
    return 0;
}