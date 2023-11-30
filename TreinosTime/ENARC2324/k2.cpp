#include <bits/stdc++.h>
using namespace std;

#define int long long
#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
// #define ss second
#define pii pair<int, int>
#define MOD 1000015553
#define sqr(x) ((x) * (x))
#define _init(x) memset(x,-1,sizeof(x))
#define all(x) (x).begin(), (x).end()
#define FOR(i, j, n) for (int i = j; i < n; i++)
#define qle(i, n) (i == n ? "\n" : " ")
#define endl "\n"
const int oo = 1e9;
const int MAX = 1e6+7;

struct Hash {
    const ll P = 31;
    int n; string s;
    vector<ll> h, hi, p;
    Hash() {}
    Hash(string s): s(s), n(s.size()), h(n), hi(n), p(n) {
        for (int i=0;i<n;i++) p[i] = (i ? P*p[i-1]:1) % MOD;
        for (int i=0;i<n;i++)
            h[i] = (s[i] + (i ? h[i-1]:0) * P) % MOD;
        for (int i=n-1;i>=0;i--) 
            hi[i] = (s[i] + (i+1<n ? hi[i+1]:0) * P) % MOD;
    }
    int query(int l, int r) {
        ll hash = (h[r] - (l ? h[l-1]*p[r-l+1]%MOD : 0));
        return hash < 0 ? hash + MOD : hash;
    }
    int query_inv(int l, int r) {
        ll hash = (hi[l] - (r+1 < n ? hi[r+1]*p[r-l+1] % MOD : 0));
        return hash < 0 ? hash + MOD : hash;
    }
};

vector<string> arr(MAX);
vector<Hash> hasharr;

bool cmp(int idx, int idx2, int l, int r){
    return (hasharr[idx].query(l, min(r, (int) arr[idx].size() - 1)) == hasharr[idx2].query( l, min(r, (int) arr[idx2].size() - 1)));
}

int32_t main(){ optimize;

    int n; cin >> n;

    map<string,int> ans;

    for(int i=0; i<n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        hasharr.push_back(Hash(arr[i]));
    }

    for(int j=0; j<n; j++){  // 1500

        string s = arr[j];

        for(int i=0; i<s.size()-1; i++){ // 20

            string p1 = s.substr(i, 2);

            for(int k=j+1; k<n; k++) {

                string ss = arr[k];
                if (ss.size()-1 <= i) continue;

                string p2 = ss.substr(i, 2);

                if(i == 0){
                    if (cmp( j, k, i+2, max(s.size(),ss.size()))){
                        
                        string a = p1; string b = p2;
                        if(a > b) swap(a, b);
                        string aux = a + b;

                        ans[aux] += 1;

                        // cout << arr[j] << " " << arr[k] << " " << aux << endl;
                    }
                }
                else if(i+1 == s.size()-1){
                    if (cmp ( j, k, 0, i-1)){
                        string a = p1; string b = p2;
                        if(a > b) swap(a, b);
                        string aux = a + b;

                        ans[aux] += 1;

                        // cout << arr[j] << " " << arr[k] << " " << aux << endl;
                    }
                }
                else{
                    if (cmp( j, k, i+2, max(s.size(),ss.size())) and cmp ( j, k, 0, i-1)){
                        string a = p1; string b = p2;
                        if(a > b) swap(a, b);
                        string aux = a + b;

                        ans[aux] += 1;

                        // cout << arr[j] << " " << arr[k] << " " << aux << endl;
                    }
                }

            } 

        }

    }

    int res = 0;

    for (auto [k, v] : ans){
        // cout << k << " " << v << endl;
        if (v == 1) res++;
    }

    cout << res << endl;

    return 0;
}