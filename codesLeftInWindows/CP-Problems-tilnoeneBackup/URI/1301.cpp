#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define endl '\n'

// n acho que eu seja bom, mas eu ja fui pior

using namespace std;

const int MAX = 1e5+7;
const int INF = 1e9+7;
const ll LLINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1000000007;
const ld EPS = 1e-8;
const ld PI = acos(-1);

struct segProd {

    int size;
    vector<int> products;

    void init(int n) {
        size = 1;
        while (size < n) size *= 2;
        products.assign(2 * size, 1);
    }

    void build(vector<int> &a, int x, int lx, int rx) {
        if (rx - lx == 1) {
            if (lx < a.size()) {
                products[x] = a[lx];
            }

            return;
        }
        
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        
        products[x] = products[2 * x + 1] * products[2 * x + 2];
    }

    void build(vector<int> &a) {
        build(a, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx) {
        if (rx - lx == 1) {
            products[x] = v;
            return;
        }

        int m = (lx + rx) / 2;
        if (i < m) {
            set(i, v, 2 * x + 1, lx, m);
        } else {
            set(i, v, 2 * x + 2, m, rx);
        }

        products[x] = products[2 * x + 1] * products[2 * x + 2];
    }

    void set(int i, int v) {
        set(i, v, 0, 0, size);
    }

    int prod(int l, int r, int x, int lx, int rx) {
        if (lx >= r || l >= rx) return 1;
        if (lx >= l && rx <= r) return products[x];

        int m = (lx + rx) / 2;
        int p1 = prod(l, r, 2 * x + 1, lx, m);
        int p2 = prod(l, r, 2 * x + 2, m, rx);

        return p1 * p2;
    }

    int prod(int l, int r) {
        return prod(l, r, 0, 0, size);
    }
};

void solve(int n, int m) {
    vi arr(n);
    for (int i = 0, value; i < n; i++) {
        cin >> value;
        
        if (value == 0) arr[i] = 0;
        else if (value < 0) arr[i] = -1;
        else arr[i] = 1;
    }

    segProd sp;
    sp.init(n);
    sp.build(arr);

    char op;
    int a, b;
    while (m--) {
        cin >> op >> a >> b;

        if (op == 'C') {
            if (b > 0) b = 1;
            else if (b < 0) b = -1;
            
            sp.set(a-1, b);
        } else {
            int ans = sp.prod(a-1, b);
            
            if (ans == 0) cout << '0';
            else if (ans == 1) cout << '+';
            else cout << '-';
        }
    }

    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    while (cin >> n >> m)
        solve(n, m);
    
    return 0;
}