#include <iostream>

using namespace std;

int main(){
    long long t, n, v[4] = {1, 7, 9, 3};
    cin >> t;
    
    while(t--){
        cin >> n;
        
        cout << v[n % 4] << endl;
        
    }
    
    return 0;
}