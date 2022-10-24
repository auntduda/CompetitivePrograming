#include<bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> g(101010);
int n;
bool passou[11000];
long long int oo = 1e18;
int dist[11000];

void dijkstra(int inicio){
    passou[inicio]=true;
    priority_queue<pair<int, int>> pq;

    for(int i=0; i<n; i++){
        dist[i] = oo;
    }

    dist[inicio]=0;

    pq.push(make_pair(inicio, 0));

    while(!pq.empty()){
        int a = pq.top().first;
        pq.pop();

        if(passou[a]){
            continue;
        }

        passou[a]=true;

        for(auto f: g[a]){
            int v=f.first;
            int p=f.second;

            if(dist[a]+p<dist[v]){
                dist[v] = dist[a]+p;

                pq.push(make_pair(dist[v], v));
            }
        }
    }
}

int main(){
    int m, s, t, k;

    scanf("%d %d", &n, &m);

    scanf("%d %d %d", &s, &t, &k);

    vector<int> a(k);

    a.push_back(1);

    for(int i=0; i<k; i++){
        int aux;
        scanf("%d", &aux);
        a[i] = aux;
    }

    a.push_back(n);

    for(int i=1; i<=m; i++){
        int u, v, w;

        scanf("%d %d %d", &u, &v, &w);

        g[u].push_back(make_pair(v, w));
        g[v].push_back(make_pair(u, w));
    }

    dijkstra(0);

    int d_casa=dist[n];
    int d_passeio=0;

    for(int i=1; i<a.size(); i++){
        d_passeio += g[i][i+1].second;
    }

    if(d_passeio == d_casa){
        printf("Sim\n");
    }
    else{
        printf("Nao\n");
    }

    return 0;
}