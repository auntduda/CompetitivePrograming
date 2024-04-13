#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define ff first
#define ss second
#define ll unsigned long long
#define int long long

using namespace std;

const ll INF = 1e18+10;
const ll MOD = 1LL<<63 - 1; // |s| = 1e3 -> |all_substrings| = 1e6 => the prime must be at least |all_substrings|² so that a collision is not found

// struct Hash { ================= nosso hash ta errado
//     const ll P = 31;
//     //const ll P = 514097;
//     int n; string s;
//     vector<ll> h, hi, p;
//     Hash() {}
//     Hash(string s): s(s), n(s.size()), h(n), hi(n), p(n) {
//         for (int i=0;i<n;i++) p[i] = (i ? P*p[i-1]:1) % MOD;
//         for (int i=0;i<n;i++)
//             h[i] = (s[i]-'a'+1 + (i ? h[i-1]:0) * P) % MOD;
//         for (int i=n-1;i>=0;i--) 
//             hi[i] = (s[i]-'a'+1 + (i+1<n ? hi[i+1]:0) * P) % MOD;
//     }
//     ll query(int l, int r) {
//         ll hash = (h[r] - (l ? h[l-1]*p[r-l+1]%MOD : 0));
//         return hash < 0 ? hash + MOD : hash;
//     }
//     ll query_inv(int l, int r) {
//         ll hash = (hi[l] - (r+1 < n ? hi[r+1]*p[r-l+1] % MOD : 0));
//         return hash < 0 ? hash + MOD : hash;
//     }
// };

// Hashed String {{{
class HashedString {
    static const int M = (1LL << 61) - 1;
    static const int B;

    static vector<int> pow;

    vector<int> p_hash;

    __int128 mul(int a, int b) { return (__int128)a * b; } // te obriga a usar o C++20 por conta do __int128
    int mod_mul(int a, int b) { return mul(a, b) % M; }

public:
    explicit HashedString(string const& s) {
        while (size(pow) < size(s) + 1) pow.push_back(mod_mul(pow.back(), B));

    p_hash.resize(size(s) + 1);
        p_hash[0] = 0;
        for (int i = 0; i < size(s); i++) {
            p_hash[i + 1] = (mul(p_hash[i], B) + s[i]) % M;
        }
    }

    int get_hash(int start, int end) {
        int raw_val = p_hash[end + 1] - mod_mul(p_hash[start], pow[end - start + 1]);
        return (raw_val + M) % M;
    }
};
vector<int> HashedString::pow = {1};
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
const int HashedString::B = uniform_int_distribution<int>(0, M - 1)(rng);
//}}}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string t, b, e; cin >> t >> b >> e;
    int n = t.size();
    int szb = b.size(), sze = e.size();
    HashedString hashb = HashedString(b);
    HashedString hashe = HashedString(e);
    HashedString hash = HashedString(t);

    unordered_set<ll> used; // se for set<ll> vai dar TLE
    // int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int sz = max(szb, sze); sz <= n; sz++) {
            if (i + sz - 1 >= n) continue;
            if (i + szb - 1 >= n) continue;
            if (i + sz - sze < 0) continue;
            if (hash.get_hash(i, i + szb - 1) == hashb.get_hash(0, szb - 1) &&
            hash.get_hash(i + sz - sze, i + sz - 1) == hashe.get_hash(0, sze - 1)) {
                // // ans++;
                // cout << i << " " << i+sz-1  << endl;
                // cout << hash.get_hash(i, i + sz - 1) << endl;
                used.insert(hash.get_hash(i, i + sz - 1));
            }
        }
    }

    cout << used.size() << '\n';

    return 0;
}