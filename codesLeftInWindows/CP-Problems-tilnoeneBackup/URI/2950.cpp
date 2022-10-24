#include <iostream>

using namespace std;

int main() {
    double n, x, y;
    cin >> n >> x >> y;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << n/(x+y) << endl;
    
    return 0;
}
