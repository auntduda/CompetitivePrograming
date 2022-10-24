#include <bits/stdc++.h>

using namespace std;

char gr[55][55];
int n, m;

void busca(int i, int j){
    gr[i][j] = 'T';
    
    if(i > 0 && gr[i-1][j] == 'A') busca(i-1, j);
    if(i < n-1 && gr[i+1][j] == 'A') busca(i+1, j);
    if(j > 0 && gr[i][j-1] == 'A') busca(i, j-1);
    if(j < m-1 && gr[i][j+1] == 'A') busca(i, j+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    while(cin >> n >> m){
        if(n == 0 && m == 0) break;
        
        queue<pair<int, int>> q;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> gr[i][j];
                if(gr[i][j] == 'T')
                    q.push({i, j});
            }
        }
        
        while(!q.empty()){
            busca(q.front().first, q.front().second);
            q.pop();
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << gr[i][j];
            }
            cout << endl;
        }
        cout << endl;
        
    }
    
    return 0;
}