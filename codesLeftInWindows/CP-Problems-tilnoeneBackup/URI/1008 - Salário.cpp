#include <iostream>

using namespace std;

int main(){
    int num, horas;
    double valor;

    cin >> num >> horas >> valor;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "NUMBER = " << num << "\nSALARY = U$ " << horas*valor << endl;

    return 0;
}
