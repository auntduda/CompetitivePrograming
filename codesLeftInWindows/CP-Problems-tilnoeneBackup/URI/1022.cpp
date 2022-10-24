#include <iostream>

using namespace std;

int operacaoFracaoNum(int n1, int d1, int n2, int d2, char op){
    if(op=='+') return (n1*d2+n2*d1);
    else if(op=='-') return (n1*d2-n2*d1);
    else if(op=='*') return (n1*n2);
    else return (n1*d2);
}

int operacaoFracaoDen(int n1, int d1, int n2, int d2, char op){
    if(op=='+') return (d1*d2);
    else if(op=='-') return (d1*d2);
    else if(op=='*') return (d1*d2);
    else return (n2*d1);
}

void simplificaFracao(int fracao[2]){
    int a = fracao[0], b = fracao[1];
    int maior=a;
    if(b>a) maior=b;
    for(int i=maior;i>0;i--){
        if(a%i==0 && b%i==0){
            a/=i;
            b/=i;
        }
    }
    
    fracao[0] = a;
    fracao[1] = b;
}

int main(){
    int n;
    while(cin >> n){
        int n1, d1, n2, d2;
        char op, buf;
        for(int i=0;i<n;i++){
            cin >> n1 >> buf >> d1 >> op >> n2 >> buf >> d2;
            int num = operacaoFracaoNum(n1, d1, n2, d2, op), den = operacaoFracaoDen(n1, d1, n2, d2, op);
            int fracaoSimplificada[2];
            fracaoSimplificada[0] = num;
            fracaoSimplificada[1] = den;
            simplificaFracao(fracaoSimplificada);
            cout << num << "/" << den << " = " << fracaoSimplificada[0] << "/" << fracaoSimplificada[1] << endl;
        }
    }
    
    return 0;
}