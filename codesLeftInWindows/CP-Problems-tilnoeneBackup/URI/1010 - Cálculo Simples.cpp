#include <iostream>

using namespace std;

int main(){
    int c1, n1, c2, n2;
    double v1, v2;

    cin >> c1 >> n1 >> v1 >> c2 >> n2 >> v2;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "VALOR A PAGAR: R$ " << n1*v1+n2*v2 << endl;

    return 0;
}
