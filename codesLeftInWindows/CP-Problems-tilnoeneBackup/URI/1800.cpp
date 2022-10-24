#include <iostream>
#include <map>

using namespace std;

int main(){
    int q, e, s;
    cin >> q >> e;
    
    map<int, bool> vis;
    for(int i = 0; i < e; i++){
        cin >> s;
        vis[s] = true;
    }
    
    for(int i = 0; i < q; i++){
        cin >> s;
        cout << !vis[s] << endl;
        vis[s] = true;
    }
    
    return 0;
}