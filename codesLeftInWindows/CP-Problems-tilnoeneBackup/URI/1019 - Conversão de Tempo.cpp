#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    cout.precision(0);
    cout.setf(ios::fixed);

    cout << n/3600 << ":" << (n%3600)/60 << ":" << ((n%3600)%60) << endl;
}
