#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        
        cout.precision(2);
        cout.setf(ios::fixed);
        
        double q, a, b, tot;
        for(int i = 1; i <= n; i++){
            cin >> q >> a >> b;
            tot = q*((a + b) * 5)/2;
            
            cout << "Size #" << i << ":" << endl;
            cout << "Ice Cream Used: " << tot << " cm2" << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}