#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> valor;
    int preco, reunioes;

    scanf("%d %d", &preco, &reunioes);

    while(reunioes--){
        int comando, valor1;
        scanf("%d %d", &comando, &valor1);

        if(comando==1){
            preco += valor1;
            valor.push(valor1);
        }
        else{
            for(int i=0; i<valor1; i++){
                preco -= valor.top();
                valor.pop();
            }
        }
    }

    printf("%d\n", preco);

    return 0;
}