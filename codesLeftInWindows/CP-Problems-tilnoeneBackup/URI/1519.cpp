#include <bits/stdc++.h>

using namespace std;

const double PI = 3.14159;
const double eps = 0.00001;
double n, l, r, R, h;

double area(double ht){ // com altura a ser testada
    double x = ((R - r) * ht) / h + r;

    return (PI * ht * (r*r + x*r + x*x)) / 3.0;
}

double bb(double a, double l, double r){
    int c = 70;
    while(c--){
        double ht = l + (r - l) / 2.0;
        double ans = area(ht);
        //cout << l << " " << r << endl;
        if(abs(ans - a) < eps)
            return ht;
        
        if(ans < a){
            l = ht;
        } else{
            r = ht;
        }
    }
    
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    int c;
    cin >> c;
    while(c--){
        cin >> n >> l;
        cin >> r >> R >> h;
        
        double ans = bb(l/n, 0.0, 100.0);
        
        if(ans > l/n) ans = l/n;

       cout << ans << endl;
    }
    
    return 0;
}