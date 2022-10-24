#include <stdio.h>
#include <string.h>

int main(){
    int k = 1, i;
    
    while(1){
        char a[3000010], b[3000010];
        
        scanf("%s", a);
        if(strcmp(a, "0") == 0) break;
        scanf("%s", b);
        
        if(k != 1) printf("\n");
        printf("Instancia %d\n", k);
        
        if(strstr(b, a))
            printf("verdadeira\n");
        else
            printf("falsa\n");
        
        k++;
    }
    
    return 0;
    
}