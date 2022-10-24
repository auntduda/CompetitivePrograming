#include <bits/stdc++.h>
#define x first
#define y second

#define MAX 1010
#define INF 5010

using namespace std;

int dist(pair<int, int> a, pair<int, int> b){ // retorna a distancai ao quadrado
	return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<vector<int>> fl(MAX);

    int n, d, x, y;
    cin >> n >> d;
    d *= d;

    pair<int, int> pontos[MAX];
    for(int i = 0; i < n; i++){
    	cin >> x >> y;
    	pontos[i] = {x, y};
    }

    for(int i = 0; i < n - 1; i++){
    	for(int j = i + 1; j < n; j++){
    		int dtemp = dist(pontos[i], pontos[j]);
    		
    		if(dtemp <= d){

    			fl[i].push_back(j);
    			fl[j].push_back(i);
    		}

    	}
    }

    int s = 0, ans = 0;
   		
    queue<int> q;
    vector<int> vis(MAX);
    q.push(s);

    while(!q.empty()){
        int v = q.front();
        q.pop();
            
        for(int u : fl[v]){
            if(!vis[u]){
                vis[u] = true;
                q.push(u);
                ans++;
            }
        }
    }

    if(ans == n)
      	cout << 'S' << endl;
    else
    	cout << 'N' << endl;

    /*
    for(int i = 0; i < n; i++){
    	cout << i << ": ";
    	for(int j = 0; j < fl[i].size(); j++){
    		cout << fl[i][j] << " ";
    	}
    	cout << endl;
    }
    */

    return 0;
}