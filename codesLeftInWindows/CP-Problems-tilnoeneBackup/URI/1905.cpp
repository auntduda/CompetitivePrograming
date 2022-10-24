#include <bits/stdc++.h>

using namespace std;

int m[5][5], vis[5][5];

void busca(int i, int j){
    vis[i][j] = 1;
    
    if(i > 0 && m[i-1][j] == 0 && vis[i-1][j] == 0) busca(i-1, j);
    if(i < 4 && m[i+1][j] == 0 && vis[i+1][j] == 0) busca(i+1, j);
    if(j > 0 && m[i][j-1] == 0 && vis[i][j-1] == 0) busca(i, j-1);
    if(j < 4 && m[i][j+1] == 0 && vis[i][j+1] == 0) busca(i, j+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    while(n--){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                vis[i][j] = 0;
            }
        }
        
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                cin >> m[i][j];
            }
        }
        
        busca(0, 0);
        
        if(vis[4][4]) cout << "COPS" << endl;
        else cout << "ROBBERS" << endl;
    }
    
    return 0;
}