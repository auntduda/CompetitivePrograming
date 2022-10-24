#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n, k=1;
    while(true){
        cin >> n;
        if(n==0) break;
        pair<int, int> p[n];
        int a; 
        double b, somap=0, somav=0; 
        for(int i=0;i<n;i++){
            cin >> a >> b;
            p[i]=make_pair(floor(b/a), a);
            somap+=a;
            somav+=b;
        }
        sort(p, p+n);
        if(k!=1) cout << endl;
        cout << "Cidade# " << k << ":" << endl;
        for(int i=0;i<n;i++){
            cout << p[i].second << "-" << p[i].first;
            if(i==n-1) cout << endl;
            else cout << " ";
        }
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << "Consumo medio: " << somav/somap << " m3." << endl;
        k++;
    }

    return 0;
}