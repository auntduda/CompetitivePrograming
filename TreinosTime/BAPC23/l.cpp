#include <bits/stdc++.h>
using namespace std;

#define int long long
#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define MOD 1000000007
#define sqr(x) ((x) * (x))
#define _init(x) memset(x,-1,sizeof(x))
#define all(x) (x).begin(), (x).end()
#define FOR(i, j, n) for (int i = j; i < n; i++)
#define qle(i, n) (i == n ? "\n" : " ")
#define endl "\n"
const int oo = 1e9;
const int MAX = 1e5+7;

vector<int> adj[MAX];
vector<int> visited(MAX);
int n, m;
int ans = 0;

void dfs(int u){

    visited[u] = true;
    int count = 0;
    bool chega_start = false;

    cout << u << " -> ";

    for(auto v : adj[u]){
        if(v == 1) chega_start = true;
        if(not visited[v]){
            cout << v << " ";  
            count++;
            dfs(v);
        }
    }

    cout << endl;
    cout << count << " " << chega_start << " " << ans << endl;

    if(count == 0){
        if(chega_start) dfs(1);
        else{
            ans++;
            if(u == 1){
                for(int i=1; i<=n; i++) if (i != u and not visited[i]){
                    adj[u].pb(i);
                    dfs(i);
                    break;
                } 
            }
            else{
                adj[u].pb(1);
                dfs(1);
            }
        }
    }

}

int32_t main(){ optimize;

    cin >> n >> m;

    while(m--){
        int a, b; cin >> a >> b;
        adj[a].pb(b);
    }

    dfs(1);

    cout << ans << endl;    
    
    return 0;
}