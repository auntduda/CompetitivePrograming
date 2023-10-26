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

    int t; cin >> t;

    while(t--)
    {
        string s; cin >> s;

        int a=0, b=0; vector<char> ans(s.size());
        int resp=-1; vector<int> resps;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='R') a++;
            else if(s[i]=='B') b++;

            if(a>b)
            {
                ans[i] = 'A';
            }
            else if(a<b)
            {
                ans[i] = 'B';
            }
            else
            {
                ans[i] = '?';
            }
        }

        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]=='A'){
                resp=i+1;
                resps.pb(i+1);
            }
        }

        if(resp==-1) cout << "0\n";
        else if(resps[resps.size()-1]==s.size()-1) cout << "-1\n"; // ta aqui o erro
        else cout << resps[0] << endl;
    }

    return 0;
}