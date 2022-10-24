#include <iostream>

using namespace std;

void notas(){
    double n, x=-1, y;
    while(true){
        cin >> n;
        if(n>=0 and n<=10){
            if(x==-1){
                x=n;
            } else{
                y=n;
                break;
            }
        } else{
            cout << "nota invalida" << endl;
        }
    }
    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "media = " << (x+y)/2 << endl;
}

int main(){ 
    int escolha=0;
    notas();
    while(escolha!=2){
        if(escolha!=1 and escolha!=2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> escolha;
        } else if(escolha==1){
            notas();
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> escolha;
        } else{
            break;
        }
    }

    return 0;
}