#include <stdio.h>
#include <string.h>

void descriptografa(char a[110], char b[110]){
    int i;
    
    for(i = 0; i < strlen(a); i += 2){
        printf("%c%c%c", a[i], a[i+1], b[i]);
        
        if(i < strlen(b) - 1) printf("%c", b[i+1]);
    }
    
    printf("\n");
    
}

int main(){
    int n;
    scanf("%d", &n);
    
    while(n--){
        char l, nome1[110], nome2[110];
        
        scanf(" %[^\n] %[^\n]", nome1, nome2);

        descriptografa(nome1, nome2);
        
    }
    
    return 0;
}