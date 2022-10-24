#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll dist(ll xa, ll ya, ll xb, ll yb){ // retorna distancia ao quadrado
    return (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll xi, yi, n, x, y, t;
    cin >> xi >> yi >> n;
    vector<ll> jogos;
    for(ll i = 0; i < n; i++){
        cin >> x >> y >> t;
        
        ll ans = dist(xi, yi, x, y);
        
        if(ans < t*t)
            jogos.push_back(i+1);
    }
    
    if(jogos.size() == 0) cout << -1 << endl;
    else{
        for(ll i = 0; i < jogos.size()-1; i++){
            cout << jogos[i] << " ";
        }
        cout << jogos[jogos.size()-1] << endl;
    }
    
    return 0;
}