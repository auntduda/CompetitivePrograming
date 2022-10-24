#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846264338327950288419716939937510;

using namespace std;

int main(){
    double xa, ya, xb, yb, cmd, enf;
    
    cout.precision(3);
    cout.setf(ios::fixed);
    
    while(cin >> xa >> ya >> xb >> yb >> cmd >> enf){

        double ab = sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));

        cmd = (cmd * PI) / 180;
        enf = (enf * PI) / 180;
        
        cout << ab * (1/tan(cmd) + 1/tan(enf)) << endl;
        
    }
    
}