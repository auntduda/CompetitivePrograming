#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double xf, yf, xi, yi, vi, r1, r2;
    while(cin >> xf){
        cin >> yf >> xi >> yi >> vi >> r1 >> r2;
        double x = (xf-xi)*(xf-xi), y=(yf-yi)*(yf-yi);
        if(sqrt(x+y)+vi*1.5>r1+r2){
            cout << "N" << endl;
        } else{
            cout << "Y" << endl;
        }
    }
    
    return 0;
}