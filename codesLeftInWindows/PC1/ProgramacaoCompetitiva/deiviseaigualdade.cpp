#include<bits/stdc++.h>

using namespace std;

int main(){

    int cidadaos, maior=-2, valor_total=0;
    vector<int> dineros;

    scanf("%d", &cidadaos);

    for(int i=0; i<cidadaos; i++){
        int aux;
        scanf("%d", &aux);

        dineros.push_back(aux);

        if(aux>maior){
            maior=aux;
        }
    }

    for(int i=0; i<dineros.size(); i++){
        if(dineros[i]<maior){
            valor_total += maior - dineros[i];
        }
    }

    printf("%d\n", valor_total);

    return 0;

}