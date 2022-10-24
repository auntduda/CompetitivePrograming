#include <iostream>

using namespace std;

int main(){
    char escolha;
    double v, soma=0;
    cin >> escolha;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin >> v;
            if(i+j>11){
                soma+=v;
            }
        }
    }
    cout.precision(1);
    cout.setf(ios::fixed);
    if(escolha=='S'){
        cout << soma << endl;
    } else if(escolha=='M'){
        cout << soma/66 << endl;
    }

    return 0;
}