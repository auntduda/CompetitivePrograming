#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int n; cin >> n;

    int ans=0;

    for(int i=0; i<4; i++)
    {
        if(1 & (n >> i)) ans++;
    }

    cout << ans << "\n";
 
    return 0;
}