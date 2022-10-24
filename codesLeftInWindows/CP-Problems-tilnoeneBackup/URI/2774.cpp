#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double h, m;
    while(cin >> h){
        cin >> m;
        int total = floor((h*60)/m);
        double v[total], soma=0;
        for(int i=0;i<total;i++){
            cin >> v[i];
            soma+=v[i];
        }
        double ma = soma/total;
        double somatorio=0;
        for(int i=0;i<total;i++){
            somatorio+=(v[i]-ma)*(v[i]-ma);
        }
        cout.precision(5);
        cout.setf(ios::fixed);
        cout << sqrt(somatorio/(total-1)) << endl;
    }
    
    return 0;
}