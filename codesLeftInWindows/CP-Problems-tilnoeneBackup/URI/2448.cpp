#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, num;
    cin >> n >> m;
    
    unordered_map<int, int> casas;
    for(int i = 1; i <= n; i++){
        cin >> num;
        
        casas[num] = i;
    }
    
    long long ans = 0, atual = 1;
    while(m--){
        cin >> num;

        ans += abs(atual - casas[num]);
        atual = casas[num];
    }
    
    cout << ans << endl;
    
    return 0;
}