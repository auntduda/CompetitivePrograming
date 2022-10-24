#include <iostream>
#include <map>
#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;

        ll v[10010];
        map<ll, ll> c;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            c[v[i]]++;
        }
        
        int dif = 0;
        for(int i = 0; i < n; i++){
            if(c[v[i]] > 0){
                dif++;
                c[v[i]] = 0;
            }
        }
        
        cout << dif << endl;
        
    }
    
    return 0;
}