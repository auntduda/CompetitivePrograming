#include <bits/stdc++.h>

#define MAX 1010

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, v, ini;
    while(cin >> n){
        if(n == 0) break;
        
        int a[60];
        
        for(int i = 1; i <= n; i++){
            cin >> v;
            a[i] = v;
        }
        
        cin >> ini;
        
        int atual = ini;
        while(true){
            
            if(atual == a[atual]){
                cout << atual << endl;
                break;
            }
            
            atual = a[atual];
            
        }
    }
    
    return 0;   
}