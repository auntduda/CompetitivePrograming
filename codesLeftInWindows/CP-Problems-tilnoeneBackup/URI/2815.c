#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000010];
    scanf(" %[^\n]", frase);
    
    int i;
    for(i = 0; i < strlen(frase)-2; i++){
        if(frase[i] == frase[i+2] && frase[i+1] == frase[i+3]){
            printf("%c%c", frase[i], frase[i+1]);
            i += 3;
        } else{
            printf("%c", frase[i]);
        }
    }
    
    printf("%c%c\n", frase[strlen(frase)-2], frase[strlen(frase)-1]);
    
    return 0;
}