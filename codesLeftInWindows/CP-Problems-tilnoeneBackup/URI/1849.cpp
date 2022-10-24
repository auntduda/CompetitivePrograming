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
    
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    ll c1 = min(a+c, min(b, d));
    ll c2 = min(a+d, min(b, c));
    ll c3 = min(b+c, min(a, d));
    ll c4 = min(b+d, min(a, c));
    
    ll c5 = min(a, b);
    ll c6 = min(c, d);
    
    ll ans = max(c1, max(c2, max(c3, c4)));
    
    cout << max(ans * ans, max(c5 * c5, c6 * c6)) << endl;
    
    return 0;
}