#include <bits/stdc++.h>
#define ff first
#define ss second
#define endl '\n'
#define INF 1e9

using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, v[16][16];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    
    ll linhas[16] = {}, colunas[16] = {}, diag1 = 0, diag2 = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            linhas[j] += v[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            colunas[j] += v[j][i];
        }
    }
    
    for (int i = 0; i < n; i++) {
        diag1 += v[i][i];
    }
    
    for (int i = 0; i < n; i++) {
        diag2 += v[n-i-1][i];
    }
    
    if (diag1 != diag2) {
        cout << -1 << endl;
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        if (linhas[i] != diag1 or colunas[i] != diag1) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    cout << diag1 << endl;
    
    return 0;
}