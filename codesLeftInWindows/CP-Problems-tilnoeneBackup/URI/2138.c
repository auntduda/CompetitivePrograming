#include <stdio.h>
#include <string.h>

int main(){
    char n[1010];
    while(scanf("%s", n) != EOF){
        int v[10] = {}, i;
        for(i = 0; i < strlen(n); i++){
            v[(int)n[i]-48]++;
        }
        
        int pmaior = 0, maior = 0;
        for(i = 0; i < 10; i++){
            if(v[i] >= maior){
                maior = v[i];
                pmaior = i;
            }
        }
        
        printf("%d\n", pmaior);
    }
    
    return 0;
}