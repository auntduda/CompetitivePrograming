#include <iostream>

using namespace std;

int main() {
    int a[3], t1, t2, t3;
    cin >> a[0] >> a[1] >> a[2];
    
    t1=a[1]*2+a[2]*4;
    t2=a[0]*2+a[2]*2;
    t3=a[0]*4+a[1]*2;
    
    cout << min(min(t1, t2), t3) << endl;
    
    return 0;
}