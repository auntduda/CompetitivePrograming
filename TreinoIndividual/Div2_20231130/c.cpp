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

int n;
int tab[100002][100002];
vector<int> arr(100002);
int soma=0;

int dp(int i, int k)
{
    if(i==n) return 0;

    if(tab[i][k]!=-1) return tab[i][k];

    soma += arr[i]*k;

    tab[i][k] = max(dp(i+1, k), soma);

    return tab[i][k];
}

int32_t main(){ optimize;

    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        _init(tab);
        int ans=-1;

        for(int i=0; i<=n; i++)
        {
            int aux = dp(0, i);

            ans = max(ans, aux);
        }

        cout << ans << endl;
    }

    return 0;
}