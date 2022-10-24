#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double n, h, c, l;
    while(cin >> n >> h >> c >> l){
        
        double a = c * n, b = h * n;
        double hip = sqrt(a*a + b*b);
        
        cout.precision(4);
        cout.setf(ios::fixed);

        cout << (l * hip) / 10000.0 << endl;
        
    }
    
    return 0;
}