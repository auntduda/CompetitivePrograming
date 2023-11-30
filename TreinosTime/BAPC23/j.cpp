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
const int MAX = 1005;

vector<int> adj[MAX];

int32_t main(){ optimize;

    int n; cin >> n;

    for(int i=1; i<n; i++){
        int j; cin >> j;
        adj[j].pb(i);
        adj[i].pb(j);
    }    

    int start = 0;
    for(int i=0; i<n; i++){
        if(adj[i].size() == 1){
            start = i;
            break;
        }
    }

    cout << start << endl;

    for(int k=1; k<=n; k++){
        queue<pii> q;
        vector<bool> visited(n);

        visited[start] = true;
        q.push({start, 1});
        int ans = 0;

        while(q.size()){
            auto [u, d] = q.front();
            q.pop();

            int count = 0;

            for(auto v : adj[u]){
                if(!visited[v]){
                    visited[v] = true;
                    q.push({v, d+1});
                    count++;
                }
            }

            if(count == 0){
                if(d >= k){
                    ans += (d - k + 1);
                }
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}