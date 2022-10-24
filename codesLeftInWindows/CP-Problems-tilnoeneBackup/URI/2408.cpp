#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int c[4];
    for(int i = 0; i < 3; i++) cin >> c[i];
    sort(c, c+3);
    
    cout << c[1] << endl;
    
    return 0;
}