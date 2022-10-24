#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define endl '\n'

// n acho que eu seja bom, mas eu ja fui pior

using namespace std;

const int MAX = 2000;
const int INF = 1e9+7;
const ll LLINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1000000007;
const ld EPS = 1e-8;
const ld PI = acos(-1);

int n, m;
char arr[MAX][MAX];
bool used[MAX][MAX];

void bfs(int i, int j) {
    queue<pii> q;
    q.push({i, j});
    
    while (!q.empty()) {
        pii curr = q.front();
        q.pop();
        
        if (!used[curr.ff][curr.ss]) {
             used[curr.ff][curr.ss] = true;
        
            if (curr.ff > 0) q.push({curr.ff-1, curr.ss});
            if (curr.ss > 0) q.push({curr.ff, curr.ss-1});
            if (curr.ff < n-1) q.push({curr.ff+1, curr.ss});
            if (curr.ss < m-1) q.push({curr.ff, curr.ss+1});
        }
    }
    
    used[i][j] = true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            
            if (arr[i][j] == 'o') 
                used[i][j] = 1;
        }
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (used[i][j]) continue;
            
            ans++;
            bfs(i, j);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}