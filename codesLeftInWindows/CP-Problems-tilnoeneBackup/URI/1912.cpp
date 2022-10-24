#include <bits/stdc++.h>
#define ll long long

const double EPS = 0.00001;

using namespace std;

ll n;

double soma(ll v[], double h){
    double ans = 0;
    
    for(int i = 0; i < n; i++){
        if(v[i] > h){
            ans += (v[i] - h);
        } else{
            return ans;
        }
    }
    
    return ans;
}

double bb(ll v[], double a, double l, double r){

    int c = 70;
    while(c--){
        double h = l + (r - l) / 2.0;
        double ans = soma(v, h);
        //cout << l << " " << r << " - " << h << " : " << ans << endl;
        if(abs(ans - a) < EPS)
            return h;
        
        if(ans > a){
            l = h;
        } else{
            r = h;
        }
    }
    
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        ll a, c, v[100010];
        cin >> n >> a;
        
        if(n == 0 && a == 0) break;
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        sort(v, v+n, greater<int>());
        
        cout.precision(4);
        cout.setf(ios::fixed);

        double altura = bb(v, a, 0, v[0]);
        
        if(accumulate(v, v+n, 0) == a) cout << ":D" << endl;
        else if(altura == -1) cout << "-.-" << endl;
        else cout << altura << endl;
    }
    
    return 0;
}