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
const int MAX = 1e5+10;
const long long INF = 1e18+10; 

typedef long long ftype;
 
struct Segtree {
    vector<ftype> seg, d, e, lazy;
    const ftype NEUTRAL = 0;
    const ftype NEUTRAL_LAZY = -INF;
    int n;
    
    Segtree(int n) {
        this->n = n;
    }
    
    ftype apply_lazy(ftype a, ftype b, int len) {
        if (b == NEUTRAL_LAZY) return a;
        else return b * len;
    }
 
    void propagate(int pos, int ini, int fim) {
        if (seg[pos] == 0) return;
        
        if (ini == fim) {
            return;
        }
 
        int m = (ini + fim) >> 1;
        
        if (e[pos] == 0) e[pos] = create();
        if (d[pos] == 0) d[pos] = create();
 
        lazy[e[pos]] = apply_lazy(lazy[e[pos]], lazy[pos], 1);
        lazy[d[pos]] = apply_lazy(lazy[d[pos]], lazy[pos], 1);
 
        seg[e[pos]] = apply_lazy(seg[e[pos]], lazy[pos], m - ini + 1);
        seg[d[pos]] = apply_lazy(seg[d[pos]], lazy[pos], fim - m);
 
        lazy[pos] = NEUTRAL_LAZY;
    }
    
    ftype f(ftype a, ftype b) {
        return a + b;
    }
 
    ftype create() {
        seg.push_back(0);
        e.push_back(0);
        d.push_back(0);
        lazy.push_back(-1);
        return seg.size() - 1;
    }
    
    ftype query(int pos, int ini, int fim, int p, int q) {
        propagate(pos, ini, fim);
        if (q < ini || p > fim) return NEUTRAL;
        if (pos == 0) return 0;
        if (p <= ini && fim <= q) return seg[pos];
        int m = (ini + fim) >> 1;
        return f(query(e[pos], ini, m, p, q), query(d[pos], m + 1, fim, p, q));
    }
 
    void update(int pos, int ini, int fim, int p, int q, int val) {
        propagate(pos, ini, fim);
        if (ini > q || fim < p) {
            return;
        }
 
        if (ini >= p && fim <= q) {
            lazy[pos] = apply_lazy(lazy[pos], val, 1);
            seg[pos] = apply_lazy(seg[pos], val, fim - ini + 1);
 
            return;
        }
 
        int m = (ini + fim) >> 1;
 
        if (e[pos] == 0) e[pos] = create();
        update(e[pos], ini, m, p, q, val);
 
        if (d[pos] == 0) d[pos] = create();
        update(d[pos], m + 1, fim, p, q, val);
 
        seg[pos] = f(seg[e[pos]], seg[d[pos]]);
    }
 
    ftype query(int p, int q) {
        return query(1, 1, n, p, q);
    }
 
    void update(int p, int q, int val) {
        update(1, 1, n, p, q, val);
    }
};


int32_t main(){ optimize;

    int n, q; cin >> n >> q;

    Segtree seg = Segtree(MAX);

    for(int i=1; i<=n; i++)         // indexado em 1
    {
        int aux; cin >> aux;
        seg.update(i, i, aux*aux);
    }

    while(q--)
    {
        char op; cin >> op;

        if(op=='u')
        {
            int l, r, x; cin >> l >> r >> x;
            seg.update(l, r, x*x);
        }else
        {
            int l, r; cin >> l >> r;

            cout << seg.query(l, r) << endl;
        }
    }

    return 0;
}