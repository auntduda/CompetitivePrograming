#include <bits/stdc++.h>
#define ff first
#define ss second
#define endl '\n'

// n acho que eu seja bom, mas eu ja fui pior

using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

const int oo = 1e9;
const ll OO = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while (cin >> n) {
        string value;
        vector<string> telefones;

        for (int i = 0; i < n; i++) {
            cin >> value;
            telefones.push_back(value);
        }
        
        sort(telefones.begin(), telefones.end());
        
        int m = telefones[0].length(), ans = 0, it = 0;
        
        for (int lin = 0; lin < n-1; lin++) {
            for (int col = 0; col < m; col++) {
                if (telefones[lin][col] == telefones[lin+1][col]) {
                    ans++;
                } else {
                    break;
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}