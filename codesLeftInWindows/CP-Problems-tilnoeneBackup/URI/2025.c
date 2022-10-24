#include <stdio.h>
#include <string.h>

int main(){
    int n, i;
    scanf("%d", &n);

    char frase[1000001];
    while(n--){
        scanf(" %[^\n]", frase);

        for(i = 1; i < strlen(frase)-7; i++){
            if(frase[i] == 'o' && frase[i+1] == 'u' && frase[i+2] == 'l' && frase[i+3] == 'u' && frase[i+4] == 'p' && frase[i+5] == 'u' && frase[i+6] == 'k' && frase[i+7] == 'k'){
                if(i >= 10){
                    
                    if(frase[i-1] != 'i' || frase[i-2] != 'k' || frase[i-3] != 'k' || frase[i-4] != 'u' || frase[i-5] != 'p' || frase[i-6] != 'u' || frase[i-7] != 'l' || frase[i-8] != 'u' || frase[i-9] != 'o' || frase[i-10] != 'J'){
                        frase[i-1] = 'J';
                        frase[i+8] = 'i';
                        
                        i += 7;
                    }
                    
                } else{
                    frase[i-1] = 'J';
                    frase[i+8] = 'i';
                    
                    i += 7;
                }
            }
        }

        printf("%s\n", frase);
        
    }

    return 0;
}