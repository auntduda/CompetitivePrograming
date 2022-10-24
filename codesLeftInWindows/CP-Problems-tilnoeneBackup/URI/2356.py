#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> mobile(100005);
bool vis[100005];

void dfs(vector<int> &v, bool &val){
    if(val) return;
    
    int ant = -1;

    for(int i = 0; i < v.size(); i++){
        if(vis[v[i]] == 0){
            if(ant == -1){
                ant = mobile[v[i]].size();
            } else if(mobile[v[i]].size() != ant){
                val = true;
                return;
            }
            vis[v[i]] = 1;
            dfs(mobile[v[i]], val);
        }
    }
    
    return;
}

int main() {
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        
        mobile[a].push_back(b);
        mobile[b].push_back(a);
    }
    
    bool val = false;
    
    mobile[0].push_back(mobile[0][0]);
    vis[0] = true;
    dfs(mobile[0], val);
    
    if(!val) cout << "bem" << endl;
    else cout << "mal" << endl;
    
    return 0;
}