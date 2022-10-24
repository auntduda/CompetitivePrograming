#include <iostream>

using namespace std;

int main(){
    double n;
    cin >> n;
    cout.precision(4);
    cout.setf(ios::fixed);
    for(int i=0;i<100;i++){
        cout << "N[" << i << "] = " << n << endl;
        n/=2;
    }

    return 0;
}