#include <bits/stdc++.h>
using namespace std;

#define int long long
#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define MOD 1000000007
#define sqr(x) ((x) * (x))
#define _init(x) memset(x,-1,sizeof(x))
#define all(x) (x).begin(), (x).end()
#define FOR(i, j, n) for (int i = j; i < n; i++)
#define qle(i, n) (i == n ? "\n" : " ")
#define endl "\n"
const int oo = 1e9;
const int MAX = 5005;

ld points[MAX];
ld tb[MAX][2*MAX];

int k, n;

ld dp(int i, int q){
    
    if(i >= n){
        if(q >= k) return 1;
        return 0;
    }

    if(tb[i][q] != -1) return tb[i][q];

    return tb[i][q] = dp(i+1, q+1) * (1-points[i]) + dp(i+1, q+1) * points[i];
}


int32_t main(){ optimize;

    for(int i=0; i<MAX; i++) for(int j=0; j<2*MAX; j++) tb[i][j] = -1;

    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> points[i];
    }

    cout << fixed << setprecision(12) << dp(0, 0) << endl;
    
    return 0;
}