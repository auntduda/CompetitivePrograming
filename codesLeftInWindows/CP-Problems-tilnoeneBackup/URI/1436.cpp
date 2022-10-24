#include <iostream>

using namespace std;

int main(){
    int n, k, v, res;
    cin >> n;
    
    for(int j = 1; j <= n; j++){
        cin >> k;
        for(int i = 0; i < k; i++){
            cin >> v;
            if(i == k/2) res = v;
        }
        
        cout << "Case " << j << ": " << res << endl;
        
    }
    
    return 0;
}