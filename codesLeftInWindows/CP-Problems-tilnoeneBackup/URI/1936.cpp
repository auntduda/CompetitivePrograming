#include <iostream>

using namespace std;

int main(){
    int n, it = 0, menor = 0, f[8] = {40320, 5040, 720, 120, 24, 6, 2, 1};
    cin >> n;
    
    while(n > 0){
        while(f[it] > n) it++;
        n -= f[it];
        
        menor++;
    }
    
    cout << menor << endl;
    
    return 0;
}