#include <iostream>

using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    for(int i=0;i<t;i++){
        int g;
        cin >> n >> k;
        if(k>n) g=n;
        else g=n%k+n/k;
        cout << g << endl;
    }

    return 0;
}