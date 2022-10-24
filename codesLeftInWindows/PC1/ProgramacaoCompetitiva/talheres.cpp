#include<bits/stdc++.h>

using namespace std;

int main(){

    int pessoas, garfos, facas, colher, qtd;

    scanf("%d %d %d %d", &pessoas, &garfos, &facas, &colher);

    if(garfos == facas){
        qtd = garfos;
    }
    else{
        if(garfos > facas){
            qtd = facas;
        }
        else{
            qtd = garfos;
        }
    }

    qtd += colher;

    if(qtd > pessoas){
        printf("%d\n", pessoas);
    }
    else{
        printf("%d\n", qtd);
    }

    return 0;

}