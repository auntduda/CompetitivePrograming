#include <iostream>

using namespace std;

int main(){
    int n, m, v[110][110], l[110] = {}, c[110] = {}, maior = 0;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
            
            l[i] += v[i][j];
            c[j] += v[i][j];
        }
    }
    
    for(int i = 0; i < n; i++)
        if(l[i] > maior) maior = l[i];
    
    for(int i = 0; i < m; i++)
        if(c[i] > maior) maior = c[i];
    
    cout << maior << endl;
    
    return 0;
}