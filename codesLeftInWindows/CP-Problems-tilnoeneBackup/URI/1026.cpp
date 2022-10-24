#include <iostream>

using namespace std;

int main() {
    long long int x, y;
    while(cin >> x){
        cin >> y;
        long long int k = x^y;
        cout << k << endl;
    }
    
    return 0;
}