#include <bits/stdc++.h>

#define MAX 1010

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    while(cin >> n >> m){
 
    	int a, b;
    	vector<vector<int>> gr(MAX);

    	for(int i = 0; i < m; i++){
    		cin >> a >> b;

    		gr[a].push_back(b);

   		}

   		int s, ans = 0;
   		cin >> s;
   		
        queue<int> q;
        vector<int> vis(MAX);
        q.push(s);

        while(!q.empty()){
            int v = q.front();
            q.pop();
            
            for(int u : gr[v]){
                if(!vis[u]){
                    vis[u] = true;
                    q.push(u);
                    ans++;
                }
            }
        }
        
        cout << ans+1 << endl;
    }

    return 0;
}