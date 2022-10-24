#include <iostream>

using namespace std;

int main(){
    int l, d, k, p;
    cin >> l >> d >> k >> p;
    
    int ped = 0, pos = 0;
    
    while(pos <= l){
        if(pos != 0) ped++;
        pos += d;
    }
    
    cout << l*k + p*ped << endl;
    
    return 0;
}