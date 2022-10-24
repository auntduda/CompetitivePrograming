#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k = 1, n;
    while(cin >> n){
        if(n == 0) break;
        
        cout << "Teste " << k << endl;
        int v1, v2, a = 0, b = 0, resto = 0;
        for(int i = 0; i < n; i++){
            cin >> v1 >> v2;
            
            a += v1;
            b += v2;
            cout << a - b << endl;
            
        }
        cout << endl;
        k++;
    }
    
    return 0;
}