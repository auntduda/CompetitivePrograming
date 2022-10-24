#include <bits/stdc++.h>
#define ff first
#define ss second
#define endl '\n'
#define INF 1e9

using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

struct myComp { 
    constexpr bool operator()( pair<int, int> const& a, pair<int, int> const& b) 
    
    const noexcept 
    { 
        if(a.ff == b.ff)
            return a.ss > b.ss;
        return a.ff > b.ff;
    } 
}; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    priority_queue< pii, vector<pii>, myComp > q; // current_time, index
    int n, m, v[10010], c;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        q.push({0, i});
    }
    
    for(int i = 0; i < m; i++){
        cin >> c;

        pii curr = q.top();
        q.pop();
        
        q.push({curr.ff + c * v[curr.ss] , curr.ss});
    }
    
    while(q.size() != 1){
        q.pop();
    }
    cout << q.top().ff << endl;

    return 0;
}