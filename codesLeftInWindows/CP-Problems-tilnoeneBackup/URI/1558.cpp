#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    
    while(cin >> n){
        
        int ini = 0, fim = sqrt(n);
        bool existe = false;
        
        while(fim >= ini){
            int temp = ini * ini + fim * fim;
            
            if(temp == n){
                existe = true;
                break;    
            } else if(temp < n)
                ini++;
            else
                fim--;
            
        }
        
        if(existe) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    return 0;
}