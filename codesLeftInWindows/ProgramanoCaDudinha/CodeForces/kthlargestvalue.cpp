#include<bits/stdc++.h>

using namespace std;

int main(){
    int tamanho, consultas;

    vector<int> array;

    scanf("%d %d", &tamanho, &consultas);

    for(int i=0; i<tamanho; i++){
        int aux;

        scanf("%d", &aux);

        array.push_back(aux);
    }

    while(consultas--){
        int tipo, acao;

        scanf("%d %d", &tipo, &acao);

        if(tipo==1){
            array[acao+1] = 1 - array[acao+1];
        }
        if(tipo==2){
            int ordenado[tamanho];

            for(int i=0; i<tamanho; i++){
                ordenado[i] = array[i];
            }


            sort(ordenado, ordenado+tamanho);

            reverse(ordenado, ordenado+tamanho);
            
            /*for(int i=0; i<tamanho; i++)
                printf("%d ", ordenado[i]);
            printf("\n");*/

            printf("%d\n", ordenado[acao-1]);
        }
    }
}