#include <iostream>

using namespace std;

int main(){
    int b, n, d, c, v;
    
    while(true){
        cin >> b >> n;
        if(b == 0) break;
        
        int banks[24];
        
        for(int i = 1; i <= b; i++) cin >> banks[i];
        
        for(int i = 0; i < n; i++){
            cin >> d >> c >> v;    
            banks[c] += v;
            banks[d] -= v;
        }
        
        bool ok = true;
        for(int i = 1; i <= b; i++){
            if(banks[i] < 0){
                ok = false;
                break;
            }
        }
        
        if(ok) cout << 'S' << endl;
        else cout << 'N' << endl;
        
    }
    
    return 0;
}