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
const int MAX = 110;

int n, arr[MAX][MAX], dp[MAX][MAX][MAX];

int solve(int ini, int fim, int i) {
    if (ini < 0 or fim >= n) return INF;
    if (dp[ini][fim][i] != -1) return dp[ini][fim][i];
    
    int soma = 0;
    for (int j = ini; j <= fim; j++)
        soma += arr[n-i-1][j];
    
    int dir = 0, esq = 0;
    if (i != 0) {
        dir = solve(ini, fim+1, i-1);
        esq = solve(ini-1, fim, i-1);
    }
    
    return dp[ini][fim][i] = soma + min(dir, esq);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    memset(dp, -1, sizeof(dp));
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    int ans = INF;
    for (int j = 0; j < n; j++) {
        ans = min(ans, solve(j, j, n-1));
    }
    
    cout << ans << endl;
    
    return 0;
}