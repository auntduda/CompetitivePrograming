#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while(n--){
        int x, y;
        cin >> x >> y;
        
        int rafael = 9*x*x+y*y;
        int beto = 2*x*x+25*y*y;
        int carlos = -100*x+y*y*y;
        
        if(rafael > beto){
            if(rafael > carlos) cout << "Rafael";
            else cout << "Carlos";
        } else{
            if(beto > carlos) cout << "Beto";
            else cout << "Carlos";
        }
        
        
        cout << " ganhou" << endl;
        
    }
    
    return 0;
}