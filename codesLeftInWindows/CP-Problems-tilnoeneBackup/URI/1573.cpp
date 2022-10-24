#include <iostream>
#include <cmath>

using namespace std;
    
int main(){
    double a, b, c;
    while(true){
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;
        
        cout << floor(pow(a*b*c, 1/3.0)) << endl;
    }
    
    return 0;
}