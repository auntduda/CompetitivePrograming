#include <iostream>

using namespace std;

int main(){
    int ta, tb, v = 1;
    cin >> ta >> tb;
    
    int a = ta, b = tb, ori = b;
    while(b - a < ori){
        b += tb;
        a += ta;
        v++;
    }
    
    cout << v << endl;
    
    return 0;
}