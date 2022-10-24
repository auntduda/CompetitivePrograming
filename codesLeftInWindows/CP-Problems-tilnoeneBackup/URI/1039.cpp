#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double r1, x1, y1, r2, x2, y2;
    
    while(cin >> r1){
        cin >> x1 >> y1 >> r2 >> x2 >> y2;
        
        double d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        
        if(d <= r1*r1 && sqrt(d)+r2 <= r1) cout << "RICO" << endl;
        else cout << "MORTO" << endl;
        
    }
    
    return 0;
}