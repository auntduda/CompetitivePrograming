// se passar nao foi eu quem fez
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
        int n, k; cin >> n >> k;

        vector<int> arr(n);
        vector<int> aux(n);

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            aux[i] = arr[i];
        }

        sort(aux.begin(), aux.end());

        bool sorted = true;

        for(int i=0; i<n; i++)
        {
            if(arr[i]!=aux[i]) sorted = false;
        }

        if(k==1 && sorted==false)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }

    return 0;
}