#include <iostream>

using namespace std;

int main(){
    double valor;
    int positivos;

    positivos = 0;
    for(int i=1;i<=6;i++){
        cin >> valor;
        if(valor>0){
            positivos++;
        }
    }

    cout << positivos << " valores positivos" << endl;

    return 0;
}
