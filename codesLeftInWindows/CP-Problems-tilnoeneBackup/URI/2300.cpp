#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int e, l, x, y, k = 1;
    while(cin >> e >> l){
        if(e == 0 && l == 0) break;

        vector<vector<int>> gr(110);
        
        for(int i = 0; i < l; i++){
            cin >> x >> y;
            gr[x].push_back(y);
            gr[y].push_back(x);
        }
        
        queue<int> q;
        vector<bool> vis(e);
        
        q.push(1);
        vis[1] = true;
        
        int tot = 0;
        while(!q.empty()){
            int v = q.front();
            q.pop();
            for(int u : gr[v]){
                if(!vis[u]){
                    vis[u] = true;
                    q.push(u);
                    tot++;
                }
            }
        }
        
        cout << "Teste " << k << endl;
        if(tot+1 == e) cout << "normal" << endl;
        else cout << "falha" << endl;
        cout << endl;
        
        k++;
    }
    
    return 0;
}