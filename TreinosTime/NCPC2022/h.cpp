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

    int n; cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++) cin >> arr[i];

    // cout << arr[0] << endl;

    int ini=arr[0];
    int peak=-1, fim=-1;
    int ans=0;

    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1] && peak==-1) // isso aqui eh um peak
        {
            peak = arr[i-1];
        }

        if((i == n - 1 || arr[i]<arr[i+1]) && peak!=-1) // isso aqui eh um fim
        {
            fim = arr[i];

            ans = max(ans, min(abs(peak-ini),abs(peak-fim)));

            ini = fim; peak=-1;
        }
        
        // cout << "peak: " << peak << " fim: " << fim << " ini: " << ini << endl;
    }

    cout << ans << endl;

    return 0;
}