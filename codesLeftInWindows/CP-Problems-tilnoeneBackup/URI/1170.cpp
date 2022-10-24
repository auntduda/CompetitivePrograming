#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n, v;
    cin >> n;
    
    while(n--){
        cin >> v;
        
        cout << ceil(log2(v)) << " dias" << endl;
    }
    
    return 0;
}