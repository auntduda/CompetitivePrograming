#include <iostream>

using namespace std;

int main(){
    int n, x, soma;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        soma=0;
        for(int j=1;j<x;j++){
            if(x%j==0){
                soma+=j;
            }
        }
        if(soma==x){
            cout << x << " eh perfeito" << endl;
        } else{
            cout << x << " nao eh perfeito" << endl;
        }
    }

    return 0;
}