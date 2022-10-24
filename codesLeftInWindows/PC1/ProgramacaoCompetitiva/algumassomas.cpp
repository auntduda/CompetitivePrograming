#include<bits/stdc++.h>

using namespace std;

int soma=0;

int algarismos(int i){
    //printf("entrou na funcao: %d\n", i);
    
    if(i==0)
        return soma;

    soma += (i%10);
    //printf("a soma eh %d\n", soma);

    return algarismos(i/10);
}

int main(){

    int range, menor, maior, result=0;

    scanf("%d %d %d", &range, &menor, &maior);

    for(int i=1; i<=range; i++){
        int aux = algarismos(i);

        //printf("aux eh %d\n", aux);

        if(aux>=menor && aux<=maior)
            result+=i;
        
        soma=0;
        //printf("resultado ate entao eh %d\n", result);
    }

    printf("%d\n", result);

    return 0;

}