#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    char v[1010][1010];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == '#'){
                if(i == 0 or i == n-1 or j == 0 or j == m-1) ans++;
                else if(i > 0 && v[i-1][j] == '.') ans++;
                else if(i < n-1 && v[i+1][j] == '.') ans++;
                else if(j > 0 && v[i][j-1] == '.') ans++;
                else if(j < m-1 && v[i][j+1] == '.') ans++;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}