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
const int MAX = 1e6+7;

int32_t main(){ optimize;

    int y, k, n; cin >> y >> k >> n;

    vector<int> ans;

    for(int i=k; i<=n; i+=k)
    {
        if(i%k==0 && (i-y)>0) ans.pb(i-y);
    }

    if(ans.empty())
    {
        cout << "-1\n";
    }else{
        for(int i=0; i<ans.size(); i++)
        {
            cout << ans[i] << ' ';
        }

        cout << endl;
    }

    return 0;
}