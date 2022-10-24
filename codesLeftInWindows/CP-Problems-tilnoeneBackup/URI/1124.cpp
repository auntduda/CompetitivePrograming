#include <bits/stdc++.h>

using namespace std;

int dist(pair<int, int> a, pair<int, int> b){ // retorna a distancia ao quadrado
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int l, c, ra, rb;
    while(cin >> l >> c >> ra >> rb){
        if(l == 0 && c == 0 && ra == 0 && rb == 0) break;
        
        pair<int, int> ca, cb;
        ca = {ra, c-ra};
        cb = {l-rb, rb};
        
        if(ra*2 <= l && ra*2 <= c && rb*2 <= l && rb*2 <= c){
            if(dist(ca, cb) >= (ra + rb) * (ra + rb)) cout << 'S' << endl;
            else cout << 'N' << endl;
        } else cout << 'N' << endl;
    }
    
    return 0;
}