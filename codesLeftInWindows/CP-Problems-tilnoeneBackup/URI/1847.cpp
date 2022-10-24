#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool feliz=false;
    
    if(a>b && b<=c) feliz=true;
    else if(b>a && c>b && c-b>=b-a) feliz=true;
    else if(a>b && b>c && b-c<a-b) feliz=true;
    else if(a==b && c>b) feliz=true;
    
    if(feliz) cout << ":)" << endl;
    else cout << ":(" << endl;
    
    return 0;
}