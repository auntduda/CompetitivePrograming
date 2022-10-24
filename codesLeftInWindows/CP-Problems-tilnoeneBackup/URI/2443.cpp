/*
#include <bits/stdc++.h>

using namespace std;

pair<int, int> somaFrac(pair<int, int> a, pair<int, int> b){
    return {a.first * b.second + b.first * a.second, a.second * b.second};
}

pair<int, int> reduzFrac(pair<int, int> a){

    while((a.first % a.second == 0 or a.second % a.first == 0) && a.second > 1 && a.first > 1){
        int v = min(a.first, a.second);
        
        a.first /= v;
        a.second /= v;
    }
    
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    pair<int, int> a, b, ans;
    cin >> a.first >> a.second >> b.first >> b.second;
    
    ans = reduzFrac(somaFrac(a, b));
    cout << ans.first << " " << ans.second << endl;
    
    return 0;
}
*/
#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    ll num = (d*a+c*b), den = d*b, mdc = __gcd(num, den);
    
    cout << num/mdc << " " << den/mdc << endl;
    
    return 0;
}