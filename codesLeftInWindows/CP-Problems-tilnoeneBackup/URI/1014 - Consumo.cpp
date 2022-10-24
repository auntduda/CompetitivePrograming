#include <iostream>

using namespace std;

int main(){
    int x;
    double y;
    cin >> x >> y;

    cout.precision(3);
    cout.setf(ios::fixed);

    cout << x/y << " km/l" << endl;

    return 0;
}
