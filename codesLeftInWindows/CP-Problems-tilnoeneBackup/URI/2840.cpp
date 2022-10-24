#include <bits/stdc++.h>

using namespace std;

const double PI = 3.1415;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double r, l;
    cin >> r >> l;
    
    double v = (4.0 * PI * r*r*r) / 3.0;
    cout << floor(l/v) << endl;
    
    return 0;
}
