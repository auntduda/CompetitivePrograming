#include <bits/stdc++.h>
using namespace std;

// toma no cu caraio

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
const int oo = 1e15;
const int MAX = 1e6+7;

int32_t main()
{   optimize;

    vector<int> a(6);

    for(int i=0; i<6; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int r=oo;

    for(int i=0; i<5; i++)
    {
        if(a[i+1] - a[i] > a[i+2]-a[i+1])
        {
            r = min(r, a[i+1] - a[i]);
        }
    }

    vector<int> ans; a[6]=a[5]+r; // gambiarra

    for(int i=0; i<5; i++)
    {
        // cout << a[i+1] << " " << a[i] << " " << a[i+1]-a[i] << endl;
        if(a[i+1]-a[i] != r)
        {
            ans.pb(a[0]+(i+1)*r);
            break;
        }else
        {
            if(a[i+1]==a[i])
            {
                ans.pb(a[i]);
                break;
            }
        }
    }

    if(ans.size()==0)
    {
        if(a[0]-r>0) ans.pb(a[0]-r);
        if(a[5]+r>0) ans.pb(a[5]+r); 
    }

    for(auto e : ans) cout << e << endl;

    return 0; 
}