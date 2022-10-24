#include <stdio.h>

int main(){
    int nc, n;
    scanf("%d", &nc);
    while(nc--){
        int i, j, h[231] = {}, altura, maior = 20;
        scanf("%d", &n);
        
        for(i = 0; i < n; i++){
            scanf("%d", &altura);
            h[altura]++;
            
            if(altura > maior){
                maior = altura;
            }
        }
        
        int is = 0;
        for(i = 20; i <= 230; i++){
            if(h[i] > 0){
                if(i == maior){
                    is = 1;
                }
                
                for(j = 0; j < h[i]; j++){

                    printf("%d", i);

                    if(is == 1 && j == h[i]-1){
                        printf("\n");
                    } else{
                        printf(" ");
                    }
                    
                }

            }
        }

    }

    return 0;
}