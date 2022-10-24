#include <iostream>

using namespace std;

int main() {
    int xa, ya, xb, yb;
    while(true){
        cin >> xa >> ya >> xb >> yb;
        if(xa == 0 && xb == 0 && ya == 0 && yb == 0) break;
        
        if(xa==xb && ya==yb) cout << 0 << endl;
        else if(xa==xb or ya==yb or (abs(xb-xa)==abs(yb-ya))) cout << 1 << endl;
        else cout << 2 << endl;
        
    }
    
    return 0;
}