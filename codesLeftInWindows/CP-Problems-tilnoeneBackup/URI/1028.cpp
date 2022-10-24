#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    
    while(n--){
        cin >> a >> b;
        
        cout << __gcd(a, b) << endl;
    }
    
    return 0;
}