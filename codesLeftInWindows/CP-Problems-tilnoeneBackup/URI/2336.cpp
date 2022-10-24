#include <iostream>

#define ll long long

const int MOD = 1000000007;

using namespace std;

ll pot[1003] = {}; // verifica se na pos eh diferente de zero

ll binpow(ll a, ll b) {
    a %= MOD;
    long long res = 1;
    while (b > 0){
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    
    return res;
}

int main(){
    string num;
    while(cin >> num){
    
        int tam = num.size();
        ll res = 0;
        
        for(int i = 0; i < tam; i++){
            res = (res + ((((int)num[i] - 65) * binpow(26, tam-1-i))));
            res %= MOD;
            // cout << binpow(26, tam-1-i) << " " << (int)num[i] - 65 << endl;
        }
        
        cout << res << endl;
    }
    
    return 0;
}