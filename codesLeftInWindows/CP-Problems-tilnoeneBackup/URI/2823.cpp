#include <bits/stdc++.h>
#define pll pair<long long, long long>
#define ll long long
#define n first
#define d second

using namespace std;

pll somafrac(pll a, pll b){
    if(a.d == b.d) return {a.n + b.n, a.d};

    return {a.n*b.d + a.d*b.n, a.d * b.d};
}

int main(){
    int n;
    cin >> n;
    
    int c, p;
    pll frac[15];
    
    for(int i = 0; i < n; i++){
        cin >> c >> p;
        
        frac[i] = {c, p};
    }
    
    pll ans = frac[0];
    for(int i = 1; i < n; i++){
        ans = somafrac(ans, frac[i]);
    }
    
    if(ans.n <= ans.d) cout << "OK" << endl;
    else cout << "FAIL" << endl;
    
    return 0;
}