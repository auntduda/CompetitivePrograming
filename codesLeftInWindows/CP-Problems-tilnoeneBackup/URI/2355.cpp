#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n;
    while(cin >> n){
        if(n == 0) break;
        
        cout << "Brasil " << (int)floor(n/90.0) << " x Alemanha " << (int)ceil((7*n)/90.0) << endl;
        
    }
    
    return 0;
}