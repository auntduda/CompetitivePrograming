#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while(cin >> n){
        if(n == 0) break;
        
        ll a[100010];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        sort(a, a+n);
        
        for(int i = 1; i < 100010; i += 2){
            if(a[i] != a[i-1]){
                cout << a[i-1] << endl;
                break;
            }
        }
    }
    
    return 0;
}