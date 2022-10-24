#include <stdio.h>
#include <string.h>

int main(){
    char frase[100010];
    while(scanf("%[^\n]", frase) != EOF){
        scanf("%*[^\n]"); scanf("%*c");
        int i;
        for(i = 0; i < strlen(frase); i++){
            if(frase[i] == '@') printf("a");
            else if(frase[i] == '&') printf("e");
            else if(frase[i] == '!') printf("i");
            else if(frase[i] == '*') printf("o");
            else if(frase[i] == '#') printf("u");
            else printf("%c", frase[i]);
        }
        printf("\n");
    }
    
    return 0;
}