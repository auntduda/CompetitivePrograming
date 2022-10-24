#include <iostream>

using namespace std;

int main(){
    double v1, v2;
    cin >> v1 >> v2;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << (v2*100)/v1-100 << "%" << endl;

    return 0; 
}