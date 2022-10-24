#include <iostream>

using namespace std;

int main(){
    int xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    
    cout << abs(xa-xb)+abs(ya-yb) << endl;
    
    return 0;
}