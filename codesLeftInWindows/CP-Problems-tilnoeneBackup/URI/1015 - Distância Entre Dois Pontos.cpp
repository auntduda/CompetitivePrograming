#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout.precision(4);
    cout.setf(ios::fixed);

    cout << sqrt(pow((x2-x1),2)+pow((y2-y1), 2)) << endl;

    return 0;
}
