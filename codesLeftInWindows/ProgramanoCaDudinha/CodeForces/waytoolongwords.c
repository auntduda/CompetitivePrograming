#include<stdio.h>
#include<string.h>

int main(){

    int qtd;

    char word[100][100];

    scanf("%d", &qtd);

    for(int i=0; i<qtd; i++){
        scanf("%s", word[i]);

        if(strlen(word[i]) > 10){
            word[i][1] = strlen(word[i]) - (int)(strlen(word[i])/1)
        }

    }

}