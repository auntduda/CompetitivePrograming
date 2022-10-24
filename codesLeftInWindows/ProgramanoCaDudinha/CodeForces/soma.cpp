#include<bits/stdc++.h>

using namespace std;

int galaxia;

int maior(int x, int y){
    if(x>y){
        return x;
    }
    else if(x<y){
        return y;
    }

    cout << "Essa resposta nao pode ser impressa pois x eh igual a y" <<  endl;

    return 1;  
}

void imprime(){
    printf("Digite um numero: ");

    return;
}

int soma(int joao, int jose){
    int s;

    s=joao+jose+galaxia;

    printf("a dentro da funcao soma: %d\n", a);

    return s;
}

int main(){
    int a, b;

    imprime();

    scanf("%d", &a);

    imprime();

    scanf("%d", &b);

    printf("a soma entre %d e %d eh %d\n", a, b, soma(a,b)); //joao=a //jose=b
    printf("essa aqui eh a galaxia: %d\n", galaxia);

    return 0;
}
