#include <iostream>

using namespace std;

int main(){
    int l;
    double valor, soma=0;
    char escolha;
    cin >> l;
    cin >> escolha;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin >> valor;
            if(j==l){
                soma+=valor;
            }
        }
    }
    cout.precision(1);
    cout.setf(ios::fixed);
    if(escolha=='S'){
        cout << soma << endl;
    } else{
        cout << soma/12 << endl;
    }

    return 0;
}