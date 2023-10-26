

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define optimize ios::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define pii pair<int, int>
#define MOD 1000000007
#define sqr(x) ((x) * (x))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define _init(x) memset(x, -1, sizeof(x))
#define FOR(i,j,n) for (int i = j; i < n; i++)
#define FORE(i,j,n) for (int i = j; i <= n; i++)
#define dbg(x) cout << "[" << #x << " = " << x << "] "
#define qle(i, n) (i == n ? "\n" : " ")
#define endl "\n"
#define bln cout << endl

const ll oo = 0x3F3F3F3F3F3F3F3F;
const ll MAX = 1e6;

int n;
vector<int> adj[MAX];
vector<bool> visited(MAX);
int vert[MAX];
int ans[MAX];
pii aresta;

ll extend_euclid(ll a, ll b, ll &x, ll &y)
{
    if(a==0)
    {
        x=0; y=1; return b;
    }

    ll x1, y1;

    ll d = extend_euclid(b%a, a, x1, y1);
    x = y1 - (b/a)*x1;
    y = x1;

    return d;
}

ll inv_gcd(ll a, ll m)
{
    ll x, y;
    extend_euclid(a, m, x, y);
    return ((x%m)+m)%m;
}
 
 
void dfs(int v){
 
    visited[v] = true;
    bool folha = true;
 
    for(auto u : adj[v]){
        if(!visited[u]){
            folha = false;
            dfs(u);
        }
        vert[v] = min(vert[u]+1, vert[v]);
    }

    if(folha) vert[v] = 1;
 
}

int32_t main(){ optimize;

    int n; cin >> n;

    FORE(i,2,n){
        int x; cin >> x;
        adj[x].pb(i);
        adj[i].pb(x);
    }

    FORE(i,1,n) vert[i] = oo;

    dfs(1);
    int m = 0; 

    FORE(i,1,n){
        m += vert[i];
    }
    

    int d = __gcd(m,n);
    // cout << m/d << "/" << n/d << endl;

    int M = 998244353;
    int ans = (m/d)*inv_gcd(n/d, M);
    cout << ans % M << endl;
    
  
    return 0;
}