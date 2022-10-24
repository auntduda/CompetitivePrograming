#include <iostream>

using namespace std;

int main(){
    double valor, n;
    int positivos;

    positivos = 0;
    n = 0;
    for(int i=1;i<=6;i++){
        cin >> valor;
        if(valor>0){
            positivos++;
            n+=valor;
        }
    }

    cout.precision(1);
    cout.setf(ios::fixed);

    cout << positivos << " valores positivos" << endl << n/positivos << endl;

    return 0;
}
