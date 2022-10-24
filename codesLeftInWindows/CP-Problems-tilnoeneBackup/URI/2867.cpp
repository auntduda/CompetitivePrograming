#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        cout << floor(log10(pow(a, b)))+1 << endl; 
    }

    return 0;
}