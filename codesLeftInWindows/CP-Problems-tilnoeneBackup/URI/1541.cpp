#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    while(true){
        cin >> a;
        if(a==0){
            break;
        }
        cin >> b >> c;
        cout << floor(sqrt((a*b)*(100.0/c))) << endl;
    }
    
    return 0;
}