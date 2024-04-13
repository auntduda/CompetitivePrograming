#include <bits/stdc++.h>
using namespace std;

#define int long long
#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define ll long long
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
const int MAX = 7e4+2;

int dp[MAX][MAX];
int n;

int solve(int i, int last)
{
    if(i>=n) return oo;
    if(dp[i][last]!=-1) return dp[i][last];

    
}

int32_t main(){ optimize;

    memset(dp, -1, sizeof(dp));
    cin >> n;

    string s; cin >> s;

    if(s[0]=='X')
    {
        cout << 0 << endl;
        return 0;
    }

    int circle=0;

    for(int i=0; i<s.size(); i++) if(s[i]=='O') circle++;

    if(circle==s.size()) cout << 1 << endl;

    

    cout << solve(0,0) << endl;

    return 0;
}