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

bool cmp(string a, string b){
    return (a == b);
}

int32_t main(){ optimize;

    int n; cin >> n;

    vector<string> arr(n);
    map<string,int> ans;

    for(int i=0; i<n; i++) cin >> arr[i];

    for(int j=0; j<n; j++){  // 1500

        string s = arr[j];

        for(int i=0; i<s.size()-1; i++){ // 20

            string p1 = s.substr(i, 2);

            for(int k=j+1; k<n; k++) {

                string ss = arr[k];
                if (ss.size()-1 <= i) continue;

                string p2 = ss.substr(i, 2);

                if(i == 0){
                    if (cmp( s.substr(i+2), ss.substr(i+2))){
                        string a = p1; string b = p2;
                        if(a > b) swap(a, b);
                        string aux = a + b;

                        ans[aux] += 1;
                    }
                }
                else if(i+1 == s.size()-1){
                    if (cmp ( s.substr(0, i), ss.substr(0, i) )){
                        string a = p1; string b = p2;
                        if(a > b) swap(a, b);
                        string aux = a + b;

                        ans[aux] += 1;
                    }
                }
                else{
                    if (cmp( s.substr(i+2), ss.substr(i+2)) and cmp ( s.substr(0, i), ss.substr(0, i) )){
                        string a = p1; string b = p2;
                        if(a > b) swap(a, b);
                        string aux = a + b;

                        ans[aux] += 1;
                    }
                }

            } 

        }

    }

    int res = 0;

    for (auto [k, v] : ans){
        if (v == 1) res++;
    }

    cout << res << endl;

    return 0;
}