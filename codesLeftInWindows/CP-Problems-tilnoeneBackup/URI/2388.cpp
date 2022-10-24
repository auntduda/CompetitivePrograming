#include <iostream>

using namespace std;

int main(){
    int n, t, v, sum = 0;
    cin >> n;
    
    while(n--){
        cin >> t >> v;
        sum += t*v;
    }
    
    cout << sum << endl;
    
    return 0;
}