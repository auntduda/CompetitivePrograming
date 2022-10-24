#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int fib[40];
    fib[0] = 1;
    fib[1] = 1;
    for(int i=2;i<n;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    for(int i=n-1;i>=0;i--){
        cout << fib[i];
        if(i==0) cout << endl;
        else cout << " ";
    }

    return 0;
}