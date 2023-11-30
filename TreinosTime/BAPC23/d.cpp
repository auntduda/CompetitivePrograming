#include <bits/stdc++.h>
using namespace std;

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;

    vector<string> words(n);
    for(int i=0; i<n; i++) cin >> words[i];

    string ans = "";

    for(int i=0; i<m; i++){
        map<char, int> mp;
        for(int j=0; j<n; j++){
            mp[words[j][i]]++;
        }

        pair<char,int> mx = {'a', 0};

        for(auto [k,v] : mp){
            if(v > mx.second){
                mx = {k,v};
            }
        }
        
        ans += mx.first;
    }

    cout << ans << endl;

    return 0;
}