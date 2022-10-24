#include <iostream>

using namespace std;

int main(){
    int n;
    
    while(true){
        cin >> n;
        if(n == 0) break;
        
        int v[10010], picos[10010], tot = 0;
        for(int i = 0; i < n; i++) cin >> v[i];
        v[n] = v[0];
        
        for(int i = 1; i <= n; i++){
            if(v[i] < v[i-1]) picos[i] = 0;
            else if(v[i] > v[i-1]) picos[i] = 1;
            else v[i] = v[i-1];
        }
        picos[0] = picos[n];
        
        for(int i = 1; i <= n; i++)
            if(picos[i] != picos[i-1]) tot++;
        
        cout << tot << endl;
        
    }
    
    return 0;
}