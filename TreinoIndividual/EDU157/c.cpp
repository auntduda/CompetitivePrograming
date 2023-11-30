// fodase tudo nesse caraio que inferno. nem com editorial essa inhaca de questao sai

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

int cnt[11][46];

int32_t main(){ optimize;

    int n; cin >> n;
    vector<string> arr(n);

    for(int i=0; i<n; i++) cin >> arr[i];


    for(auto e : arr)
    {
        int sum = 0;
        for(int i=0; i<e.size(); i++) sum += e[i] = '0';
    
        cnt[e.size()][sum]++;
    }

    int ans=0;

    for(int i=1; i<45; i++)
    {
        for(int j=1; j<45; j++)
        {
            int s;
            if(i>=j) s = i-j;
            else s=j-i;

            for(int k=1; k<11; k++)
            {
                if(cnt[k][s]!=0) ans+=cnt[k][s];

                // cout << "cnt[" << k << "][" << s << "] = " << cnt[k][s] << endl;
            }
        }
    }

    cout << ans << endl;


    return 0;
}