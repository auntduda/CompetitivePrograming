#include <stdio.h>
#include <string.h>

int main(){
    char ori[100010], f[100010];
    scanf("%s", ori);
    
    int k;
    scanf("%d", &k);
    
    int dif[5], i, j;
    
    for(i = 0; i < 5; i++){
        scanf("%s", f);
        int temp = 0;
        
        for(j = 0; j < strlen(f); j++)
            if(f[j] == ori[j]) temp++;
        
        dif[i] = temp;
    }
    
    int maior = 0;
    
    for(i = 0; i < 5; i++)
        if(dif[i] > maior) maior = dif[i];
    
    if(strlen(ori) - maior > k) printf("-1\n");
    else{
        for(i = 0; i < 5; i++){
            if(dif[i] == maior){
                printf("%d\n", i+1);
                printf("%d\n", strlen(ori) - maior);
                break;
            }
        }
    }
    
    return 0;
}