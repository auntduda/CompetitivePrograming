#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define endl '\n'

// n acho que eu seja bom, mas eu ja fui pior

using namespace std;

const int INF = 1e9+7;
const ll LLINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1000000007;
const int MAX = 1e4+7;

ll n, dp[MAX];

ll solve(int i) {
    if (i == n) return 1;
    if (i > n) return 0;
    if (dp[i] != -1) return dp[i];
    
    return dp[i] = (solve(i+1)%MOD + 4*solve(i+2)%MOD + 2*solve(i+3)%MOD) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    memset(dp, -1, sizeof(dp));
    cin >> n;
    
    cout << solve(0) << endl;
    
    return 0;
}