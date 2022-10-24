#include <iostream>

using namespace std;

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if(n > a or n > b or n > c) cout << 'N' << endl;
    else cout << 'S' << endl;
    
    return 0;
}