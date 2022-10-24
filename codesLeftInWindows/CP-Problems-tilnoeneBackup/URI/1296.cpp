#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double a, b, c;
    while(cin >> a >> b >> c){

        cout.precision(3);
        cout.setf(ios::fixed);
        
        double raiz = 2*(a*a*b*b+b*b*c*c+c*c*a*a)-(a*a*a*a + b*b*b*b + c*c*c*c);
        
        if(raiz > 0) cout << 1/3.0 * sqrt(raiz) << endl;
        else cout << -1.0 << endl;
        
    }

    return 0;
}