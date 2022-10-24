#include <iostream>

using namespace std;

int main(){
    double a, b;
    cout.precision(5);
    cout.setf(ios::fixed);
    cin >> a >> b;
    cout << "Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = " << (a*b)/2 << "." << endl;

    return 0;
}