#include <iostream>

using namespace std;

int main(){
    int n, m, t;
    
    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        
        int v[10010] = {}, rep = 0;
        
        for(int i = 0; i < m; i++){
            cin >> t;
            v[t]++;
        }
        
        for(int i = 0; i < 10010; i++){
            if(v[i] > 1){
                rep++;
            }
        }
        
        cout << rep << endl;
    }
    
    return 0;
}