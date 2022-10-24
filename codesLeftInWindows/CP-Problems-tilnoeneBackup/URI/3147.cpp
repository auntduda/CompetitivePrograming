#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    
    long long sa = a + b + c + f;
    long long sb = d + e;
    
    if(sa > sb) cout << "Middle-earth is safe." << endl;
    else cout << "Sauron has returned." << endl;
    
    return 0;
}