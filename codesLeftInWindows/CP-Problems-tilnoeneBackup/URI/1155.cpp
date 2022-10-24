#include <iostream>

using namespace std;

int main(){
    double soma=0, divisao, i;
    for(i=1;i<=100;i++){
        divisao=1/i;
        soma+=divisao;
    }
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << soma << endl;

    return 0;
}