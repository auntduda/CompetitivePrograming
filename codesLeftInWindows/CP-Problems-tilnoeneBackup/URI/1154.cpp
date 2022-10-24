#include <iostream>

using namespace std;

int main(){
    int idade, n=0;
    double soma=0;
    while(true){
        cin >> idade;
        if(idade<0){
            break;
        }
        soma+=idade;
        n++;
    }
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << soma/n << endl;

    return 0;
}