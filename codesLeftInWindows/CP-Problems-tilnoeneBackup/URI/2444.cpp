#include <iostream>

using namespace std;

int main(){
    int v, t, a;
    cin >> v >> t;
    
    while(t--){
        cin >> a;
        v += a;
        
        if(v > 100) v = 100;
        else if(v < 0) v = 0;
    }
    
    cout << v << endl;
    
    return 0;
}