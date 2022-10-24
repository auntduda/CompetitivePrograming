#include <stdio.h>
#include <string.h>
#define false 0
#define true 1

int lpos(char l){ return (int)l-64;}

int main(){
    char s[100];
    
    while(scanf("%s", s) != EOF){
        
        int size = strlen(s), v = 0;
        int existe = true;
        
        if(size == 3 && (s[0] > 'X'  || (s[0] == 'X' && s[1] > 'F') || (s[0] == 'X' && s[1] == 'F' && s[2] > 'D'))) existe = false;
        else if(size < 3) existe = true;
        else if(size > 3) existe = false;
        
        if(existe){
            
            if(size == 3){
                v = lpos(s[0]) * 26 * 26 + lpos(s[1]) * 26 + lpos(s[2]);
            } else if(size == 2){
                v = lpos(s[0]) * 26 + lpos(s[1]);
            } else{
                v = lpos(s[0]);
            }

            printf("%d\n", v);
            
        } else printf("Essa coluna nao existe Tobias!\n");
            
    }
    
    return 0;
}