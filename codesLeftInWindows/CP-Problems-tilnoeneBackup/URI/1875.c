#include <stdio.h>
#include <string.h>

int main(){
    int c;
    scanf("%d", &c);
    while(c--){
        int i, n, r = 0, g = 0, b = 0;
        scanf("%d", &n);
        
        char ac[2], bc[2];
        for(i = 0; i < n; i++){
            
            scanf("%s %s", ac, bc);
            
            if(strcmp(ac, "R") == 0){
                if(strcmp(bc, "G") == 0) r++;
                r++;
            }
            else if(strcmp(ac, "G") == 0){
                if(strcmp(bc, "B") == 0) g++;
                g++;
            } else{
                if(strcmp(bc, "R") == 0) b++;
                b++;
            }
            
        }
        
        if(r == g && r == b) printf("trempate\n");
        else if(r > g && r > b) printf("red\n");
        else if(g > r && g > b) printf("green\n");
        else if(b > r && b > g) printf("blue\n");
        else printf("empate\n");
        
    }
    
    return 0;
}