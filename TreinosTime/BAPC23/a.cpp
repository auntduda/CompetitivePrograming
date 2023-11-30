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

bool myfunction (int i,int j) { return (i>j);}

int32_t main(){ optimize;

    int n, m , k; cin >> n >> m >> k;

    vector<double> arr(n);
    double tt=0;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        tt += arr[i];
    }

    sort(all(arr), myfunction);

    double curr=0;

    for(int i=0; i<m; i++)
    {
        curr += arr[i];
        // cout << arr[i] << " " << curr << endl;
    }

    for(int i=m; i<m+k; i++)
    {
        curr += arr[i];
    }

        // cout << curr << " " << tt << endl; - fui jeca
    cout << fixed << setprecision(12) << (curr/tt)*100 << endl;

    return 0;
}