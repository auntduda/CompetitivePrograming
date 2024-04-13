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

    int n, m; cin >> n >> m;

    int q; cin >> q;

    while(q--)
    {
        string s; cin >> s;

        string col; int row, num=0;

        for(int k=0; k<s.size(); k++)
        {
            if(s[k]>47 && s[k]<58)
            {
                // ele eh numero
                num += s[i]
            }
        }
        
        int i, j;
        cout << (i*m) + j + 1 << endl;
    }


    return 0;
}