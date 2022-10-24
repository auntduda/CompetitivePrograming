#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    while (cin >> n) {
        if(n == 0) break;
        
        ll v[100010];
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        sort(v, v+n);
        
        ll n1, n2;
        bool ex_n1 = false;
        for (int i = 0; i < n; i += 2) {
            if (i == n-1) {
                n2 = v[i];
                break;
            }
            
            if (v[i] != v[i+1]) {
                if (!ex_n1) {
                    n1 = v[i];
                    ex_n1 = true;
                } else {
                    n2 = v[i];
                    break;
                }
                
                i--;
            }
            
        }
        
        cout << n1 << " " << n2 << endl;
    }
    
    return 0;
}