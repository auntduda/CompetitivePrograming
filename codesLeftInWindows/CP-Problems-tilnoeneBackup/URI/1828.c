#include <stdio.h>
#include <string.h>

int jogo(char a[32], char b[32]){
    if(strcmp(a, b)==0){
        return 2;
    }
    if(strcmp(a, "tesoura")==0 && strcmp(b, "papel")==0) return 1;
    if(strcmp(a, "papel")==0 && strcmp(b, "pedra")==0) return 1;
    if(strcmp(a, "pedra")==0 && strcmp(b, "lagarto")==0) return 1;
    if(strcmp(a, "lagarto")==0 && strcmp(b, "Spock")==0) return 1;
    if(strcmp(a, "Spock")==0 && strcmp(b, "tesoura")==0) return 1;
    if(strcmp(a, "tesoura")==0 && strcmp(b, "lagarto")==0) return 1;
    if(strcmp(a, "lagarto")==0 && strcmp(b, "papel")==0) return 1;
    if(strcmp(a, "papel")==0 && strcmp(b, "Spock")==0) return 1;
    if(strcmp(a, "Spock")==0 && strcmp(b, "pedra")==0) return 1;
    if(strcmp(a, "pedra")==0 && strcmp(b, "tesoura")==0) return 1;
    return 0;
}

int main(){
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        char s[32], r[32];
        scanf("%s %s", s, r);
        printf("Caso #%d: ", i+1);
        int res = jogo(s, r);
        if(res==2){
            printf("De novo!\n");
        } else if(res==1){
            printf("Bazinga!\n");
        } else{
            printf("Raj trapaceou!\n");
        }
    }
    
    return 0;
}