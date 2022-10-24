#include<bits/stdc++.h>
#include<string.h>

using namespace std;

char galera[10][26];

void bubbleSort(int amigos){
    char aux[26];

    for(int i=0; i<amigos; i++){
        for(int j=0; j<amigos; j++){
            if(memcmp(galera[i], galera[j], 26)<0){
                strcpy(aux, galera[i]);
                strcpy(galera[i], galera[j]);
                strcpy(galera[j], aux);
            }
        }
    }
}

int main(){
    int matricula[10] = {0,0,0,0,0,0,0,0,0,0};
    int amigos;
    char copia[10][26];

    scanf("%d", &amigos);

    for(int i=0; i<amigos; i++){
        scanf("%s", galera[i]);

        strcpy(copia[i], galera[i]);
    }

    /*for(int i=0; i<amigos; i++){
        printf("desordenado\n%s\n", galera[i]);
        printf("%s\n", copia[i]);
    }*/

    bubbleSort(amigos);

    /*for(int i=0; i<amigos; i++){
        printf("ordenado\n%s\n", galera[i]);
        printf("%s\n", copia[i]); 
    }*/

    for(int i=0; i<amigos; i++){
        for(int j=0; j<amigos; j++){
            if(*galera[i] == *copia[j]){
                matricula[j] = i;
            }
        }
    }
    
    for(int i=0; i<amigos; i++){
        if(i==amigos-1){
            printf("%d\n", matricula[i]);
        }
        else{
            printf("%d ", matricula[i]);
        }
    }

    return 0;

}