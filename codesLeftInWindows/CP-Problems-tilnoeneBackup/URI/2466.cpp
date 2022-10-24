#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, c;
    cin >> n;
    int m[70][70];
    for(int i = 0; i < 70; i++){
        for(int j = 0; j < 70; j++){
            m[i][j] = 0;
        }
    }
    
    for(int i = 0; i < n; i++){
        cin >> m[0][i];
    }
    
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(m[i-1][j] == m[i-1][j+1]){
                m[i][j] = 1;
            } else{
                m[i][j] = -1;
            }
        }
    }
    
    if(m[n-1][0] == -1){
        cout << "branca" << endl;
    } else{
        cout << "preta" << endl;
    }
    
    return 0;
}