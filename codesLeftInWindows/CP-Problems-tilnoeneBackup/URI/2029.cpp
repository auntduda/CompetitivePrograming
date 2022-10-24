#include <iostream>

using namespace std;

int main(){
    double v, d, raio;
    cout.precision(2);
    cout.setf(ios::fixed);
    while(cin >> v){
        cin >> d;
        raio=d/2;
        cout << "ALTURA = " << v/(3.14*raio*raio) << endl;
        cout << "AREA = " << 3.14*raio*raio << endl;
    }

    return 0;
}