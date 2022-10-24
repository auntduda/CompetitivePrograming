#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(abs(b-c)<a and a<b+c and abs(a-c)<b and b<a+c and abs(a-b)<c and c<a+b){
        if(a==b and a==c){
            cout << "Valido-Equilatero" << endl;
        } else if(a!=b and a!=c and b!=c){
            cout << "Valido-Escaleno" << endl;
        } else{
            cout << "Valido-Isoceles" << endl;
        }
        
        if(b*b==a*a+c*c or a*a==b*b+c*c or c*c==a*a+b*b){
            cout << "Retangulo: S" << endl;
        } else{
            cout << "Retangulo: N" << endl;
        }

    } else{
        cout << "Invalido" << endl;
    }

    return 0;
}