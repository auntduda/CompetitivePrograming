#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back

const int MAX = 200005;
const int INF = 1000000000;
vector<vector<pair<int, int>>> adj(MAX);
vector<int> dist; vector<int> p; vector<int> ans;

void caminho(int node, int n)
{
    if(node==n)
    {
        return;
    }else
    {
        ans.pb(node);
        return caminho(p[node],n);
    }
}

void dijkstra(int s, vector<int> & d) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);

    d[s] = 0;
    set<pair<int, int>> q;
    q.insert({0, s});
    while (!q.empty()) {
        int v = q.begin()->second;
        q.erase(q.begin());

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                p[to] = v;
                q.insert({d[to], to});
            }
        }
    }
}

int32_t main(){
    
    int n, m; cin >> n >> m;

    for(int i=0; i<m; i++){
        int a, b; cin >> a >> b;
        adj[a].pb({b,1});
        adj[b].pb({a,1});
    }

    dijkstra(1, dist);

    if(dist[n]==INF)
    {
        cout << "IMPOSSIBLE\n";
    }else
    {
        cout << dist[n]+1 << endl;

        caminho(n,1);
        ans.pb(1);
        reverse(ans.begin(), ans.end());

        for(int i=0; i<ans.size(); i++) printf("%lld ", ans[i]);

    }


    return 0;
}