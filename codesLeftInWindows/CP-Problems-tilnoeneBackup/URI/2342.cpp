#include <iostream>

using namespace std;

int main(){
    int n, p, q;
    char c;
    cin >> n >> p >> c >> q;
    
    long long res;
    if(c == '+') res = p + q;
    else res = p * q;
    
    if(n < res) cout << "OVERFLOW" << endl;
    else cout << "OK" << endl;
    
    return 0;
}