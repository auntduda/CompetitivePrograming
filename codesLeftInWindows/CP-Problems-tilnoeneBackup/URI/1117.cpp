#include <iostream>

using namespace std;

int main(){
    double n1=-1, n2, nota;
    while(true){
        cin >> nota;
        if(nota>=0 and nota<=10){
            if(n1<0){
                n1=nota;
            } else{
                n2=nota;
                break;
            }
        } else{
            cout << "nota invalida" << endl;
        }
    }
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << "media = " << (n1+n2)/2 << endl;

    return 0;
}