#include <iostream>

using namespace std;

int ch;

int fib(int n){
    ch += 1;
    if(n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main(){
    int n, nc;
    cin >> nc;
    
    while(nc--){
        cin >> n;
        
        ch = -1;
        int ans = fib(n);
        cout << "fib(" << n << ") = " << ch << " calls = " << ans << endl;
    }
    
    return 0;
}