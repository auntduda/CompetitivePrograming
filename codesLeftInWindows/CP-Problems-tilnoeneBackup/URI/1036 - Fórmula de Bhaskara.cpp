#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, delta;
    cin >> a >> b >> c;

    cout.precision(5);
    cout.setf(ios::fixed);

    delta = b*b-4*a*c;

    if(delta<0 or a==0){
        cout << "Impossivel calcular" << endl;
    } else {
        cout << "R1 = " << (-b+sqrt(delta))/(2*a) << endl;
        cout << "R2 = " << (-b-sqrt(delta))/(2*a) << endl;
    }

    return 0;
}
