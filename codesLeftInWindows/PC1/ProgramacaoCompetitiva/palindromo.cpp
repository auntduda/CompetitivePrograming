#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
    char palavra[100000];
    bool palindromo=true;
    int igual=0;

    memset(palavra, 0, sizeof(int));

    scanf("%s", palavra);

    sort(palavra, palavra+strlen(palavra));

    //printf("%s\n", palavra);

    char da_vez = palavra[0];

    for(int i=0; i<=strlen(palavra) && palindromo; i++){
        if(da_vez == palavra[i]){
            igual++;
            printf("%d\n", igual);
        }
        else{
            if(strlen(palavra)%2 == 0){
                if(igual%2!=0){
                    palindromo=false;
                    //break;
                }
            }
            else{
                da_vez = palavra[i];
                igual=0;
            }
        }
    }

    if(palindromo){
        printf("Sim\n");
        return 0;
    }
    else{
        printf("Nao\n");
        return 0;
    }

}