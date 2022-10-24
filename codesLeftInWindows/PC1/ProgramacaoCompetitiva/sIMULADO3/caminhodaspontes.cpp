#include<bits/stdc++.h>

using namespace std;

int n, m, s, t, b;
vector<vector<pair<int, int>>> g(n+1);
vector<bool> passou(n+1);

int dijkstra(int comeco){
    passou[comeco]=true;
    g[comeco][comeco]=make_pair(0,0);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> fila_prior;

    fila_prior.push(make_pair(g[comeco][comeco].first, comeco));

    int i=0;

    while(fila_prior.size()!=0){
        pair<int,int> par;
        par=fila_prior.top();
        fila_prior.pop();

        if(par.first>g[comeco][comeco+i].first){
            continue;
        }

        for(int j=comeco+i; j<=n+1; j++){
            pair<int,int> par1=make_pair(g[comeco][j].first, j);

            if(par1.first>par.first+g[comeco][j].first){
                par1.first=par.first+g[comeco][j].first;
                fila_prior.push(par1);
            }
        }

        i++;
    }

    sort(g.begin(), g.end());

    return g[comeco][0].first;

}

int main(){
    scanf("%d %d", &n, &m);
    
    memset(g, 1e18, n*2*sizeof(int));

    for(int i=0; i<=n+1; i++){
        scanf("%d %d %d", &s, &t, &b);

        g[s].push_back(make_pair(b,t));
        g[t].push_back(make_pair(b,s));
    }

    printf("%d\n", dijkstra(0));

    return 0;
}