#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int v, n;
    cin >> v >> n;
    for(int i=10;i<=90;i+=10){
        int k = ceil(i/100.0 * v*n);
        cout << k;
        
        if(i==90) cout << endl;
        else cout << " ";
    }

    return 0;
}