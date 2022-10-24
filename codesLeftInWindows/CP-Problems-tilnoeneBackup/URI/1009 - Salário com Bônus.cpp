#include <iostream>

using namespace std;

int main(){
    string nome;
    double salario, vendas;

    cin >> nome >> salario >> vendas;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "TOTAL = R$ " << salario+(15*vendas)/100 << endl;

    return 0;
}

