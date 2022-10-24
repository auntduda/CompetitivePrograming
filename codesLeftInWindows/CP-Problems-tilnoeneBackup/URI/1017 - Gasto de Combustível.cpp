#include <iostream>

using namespace std;

int main(){
    double tempo, vm, gasolina;

    cin >> tempo >> vm;

    gasolina = tempo*vm/12;

    cout.precision(3);
    cout.setf(ios::fixed);

    cout << gasolina << endl;

    return 0;
}
