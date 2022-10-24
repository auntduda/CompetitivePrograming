#include<bits/stdc++.h>

using namespace std;

int main(){

    int valor, moedas_um;

    scanf("%d %d", &valor, &moedas_um);

    if(valor%500!=0){
        valor = valor%18;

        if(valor>moedas_um){
            printf("Nao\n");

            return 0;
        }
        else{
            printf("Sim\n");

            return 0;
        }
    }
    else{
        printf("Sim\n");

        return 0;
    }
}