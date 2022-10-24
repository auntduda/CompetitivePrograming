#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    cout << "Top ";
    if(n <= 1) cout << 1 << endl;
    else if(n <= 3) cout << 3 << endl;
    else if(n <= 5) cout << 5 << endl;
    else if(n <= 10) cout << 10 << endl;
    else if(n <= 25) cout << 25 << endl;
    else if(n <= 50) cout << 50 << endl;
    else cout << 100 << endl;
    
    return 0;
}