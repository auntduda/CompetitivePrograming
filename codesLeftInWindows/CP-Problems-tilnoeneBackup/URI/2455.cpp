#include <iostream>

using namespace std;

int main(){
    int p1, c1, p2, c2;
    cin >> p1 >> c1 >> p2 >> c2;
    
    int l1 = p1*c1, l2 = p2*c2;
    if(l1 == l2) cout << 0 << endl;
    else if(l1 < l2) cout << 1 << endl;
    else cout << -1 << endl;
    
    return 0;
}