#include <iostream>
#define ll long long

using namespace std;

ll pascal[64] = {};

ll elevar(ll n, ll p){
    ll res = 1;
    
    for(int i = 1; i <= p; i++)
        res *= n;
    
    return res;
}

int main(){
    int t, n;
    cin >> t;

    while(t--){
        ll sum = 0;
        cin >> n;
        
        for(int i = 0; i < n; i++){
            if(pascal[i] != 0) sum += pascal[i];
            else{
                ll v = elevar(2, i);
                sum += v;
                
                pascal[i] = v;
            }
        }
        
        cout << sum << endl;
    }
    
    return 0;
}