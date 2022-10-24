#include <bits/stdc++.h>
#define pii pair<int, int>
#define ff first
#define ss second

using namespace std;

int h, l;
char gr[410][410];
bool vis[410][410];
int c = 0;

void percorre(int i, int j){
    vis[i][j] = true;
    c++;
    
    if(i > 0 && gr[i-1][j] == 'C' && !vis[i-1][j]) percorre(i-1, j);
    if(i < h-1 && gr[i+1][j] == 'C' && !vis[i+1][j]) percorre(i+1, j);
    if(j > 0 && gr[i][j-1] == 'C' && !vis[i][j-1]) percorre(i, j-1);
    if(j < l-1 && gr[i][j+1] == 'C' && !vis[i][j+1]) percorre(i, j+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> h >> l;
    queue<pii> q;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < l; j++){
            cin >> gr[i][j];

            if(gr[i][j] == 'C')
                q.push({i, j});
        }
    }
    
    // zerar matriz de visitados
    for(int i = 0; i < h; i++){
        for(int j = 0; j < l; j++){
            vis[i][j] = false;
        }
    }
    
    int ans = 0;
    while(!q.empty()){
        int i = q.front().ff, j = q.front().ss;
        q.pop();
        
        if(vis[i][j]) continue;
        
        c = 0;
        percorre(i, j);
        
        if(c > ans)
            ans = c;
    }
    
    cout << ans << endl;
    
    return 0;
}