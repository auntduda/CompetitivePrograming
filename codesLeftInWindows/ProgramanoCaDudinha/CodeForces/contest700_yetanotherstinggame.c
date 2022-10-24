#include<stdio.h>
#include<string.h>

int main(){

    int i, testes, j;

    char palavra[50];

    scanf("%d", &testes);

    for(i=0; i<testes; i++){
        scanf("%s", palavra);

        for(i=0; i<strlen(palavra); i=(2*i)){
            if(palavra[i] != 'a'){
                palavra[i] = 'a';
            }
            else{
                palavra[i] = 'b'
            }
        }

        for(i=0; i<strlen(palavra); i=(2*i)+1){
            if(palavra[i] != 'z'){
                palavra[i] = 'z';
            }
            else{
                palavra[i] = 'y'
            }
        }
    
        printf("%s\n", palavra);
    
    }

    return 0;

}