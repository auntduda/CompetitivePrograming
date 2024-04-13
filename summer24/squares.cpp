#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>

using namespace std;


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int h, w; cin >> h >> w;
    vector<int> vert(h), hor(w);
    unordered_map<int, int> freqv, freqh;
    
    for (int i = 0; i < h; i++) {
        cin >> vert[i];
    }
    
    for (int i = 0; i < w; i++) {
        cin >> hor[i];
    }
    
    for (int i = 0; i < h; i++) {
        for (int j = i + 1; j < h; j++) {
            freqv[vert[j] - vert[i]]++;
        }
    }
    
    for (int i = 0; i < w; i++) {
        for (int j = i + 1; j < w; j++) {
            freqh[hor[j] - hor[i]]++;
        }
    }
    
    int ans =  0;
    for (auto [key, value] : freqv) {
        ans += value * freqh[key];
    }
    
    cout << ans << '\n';
    
    return 0;
}