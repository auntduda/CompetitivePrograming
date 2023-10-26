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

    double r; cin >> r;

    double k = (2*r)/4;

    double a=(2*r), b=3*k, c=5*k;

    double h = (a*b)/c;

    // cos alpha
    double ca = 1-((h*h)/(2*(r*r)));

    double alpha = acos(ca);

    // sen aplha
    double sa = sin(alpha);

    double f = r*sa;

    double ans = (r*f + alpha*(r*r))/2;

    cout << fixed << setprecision(12) << ans << endl; 

    return 0;
}