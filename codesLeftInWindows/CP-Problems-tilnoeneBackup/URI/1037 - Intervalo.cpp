#include <iostream>

using namespace std;

int main(){
    double a;
    cin >> a;

    if(a>=0 and a<=100){
        cout << "Intervalo ";
        if(a<=25){
            cout << "[0,25]" << endl;
        } else if(a<=50){
            cout << "(25,50]" << endl;
        } else if(a<=75){
            cout << "(50,75]" << endl;
        } else if(a<=100){
            cout << "(75,100]" << endl;
        }
    } else {
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}
