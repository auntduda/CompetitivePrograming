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

    vector<tuple<int,int,int,int,int>> arr(n);
    for(int i=0; i<n; i++){
        int a, b, c, d; cin >> a >> b >> c >> d;
        arr[i] = {a-d,a,b,c,d};
    }

    sort(all(arr));

    int temp = 0, finish = 0;
    int ans = 0;

    for(int i=0; i<n; i++){
        auto [dif,s,p,e,a] = arr[i];

        cout << s << " " << finish << " " << temp << endl;
        
        if(s >= finish){
            temp += (s - finish);
            if(a <= temp){
                temp -= a;
                finish = p;
                ans++;
            }
            else{
                finish = e;
            }
        }

    }

    cout << ans << endl;
    
    
    return 0;
}