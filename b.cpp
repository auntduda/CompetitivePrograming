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

    double a, b, c; cin >> a >> b >> c;

    char op; cin >> op;

    double ans=0;

    if(op == 'A')
    {
        double div = (b/2.00);
        double a2b = 3.00*div;
        div = (c/2.00);
        double a2c = 5.00*div;

        ans = floor(a2b+a2c);
    }else if(op == 'B')
    {
        double div = (a/3.00);
        double b2a = 2.00*div;
        div = (c/3.00);
        double b2c = 5.00*div;

        //cout << b2a << " " << b2c << endl;

        ans = floor(b2a+b2c);
    }else{
        double div = (a/5.00);
        double c2a = 2.00*div;
        div = (b/5.00);
        double c2b = 3.00*div;

        ans = floor(c2a+c2b);
    }

    int ans_int = (int)ans;

    cout << ans_int << endl;

    return 0;
}