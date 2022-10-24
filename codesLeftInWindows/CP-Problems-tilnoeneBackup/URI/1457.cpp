#include <iostream>
#define ll long long

using namespace std;

ll kf(ll n, ll k){
    ll res = 1, i = 0;
    
    while(n-k*i >= 1){
        res *= n-k*i;
        i++;
    }
    
    return res;
    
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        string num, nTemp = "";
        cin >> num;
        
        int i = 0;
        while(true){
            if(!isdigit(num[i])) break;
            nTemp += num[i];
            i++;
        }
        
        ll n = stoi(nTemp), k = num.size()-i;
        cout << kf(n, k) << endl;
        
    }
    
    
    return 0;
}