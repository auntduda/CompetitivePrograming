#include <iostream>

using namespace std;

int main(){
    int n, l, c, queb = 0;
    cin >> n;
    while(n--){
        cin >> l >> c;
        if(l > c) queb += c;
    }
    
    cout << queb << endl;
    
    return 0;
}