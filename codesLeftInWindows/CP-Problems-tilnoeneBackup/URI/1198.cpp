#include <iostream>

using namespace std;

int main(){
    long long a, b;
    while(cin >> a){
        cin >> b;
        
        cout << abs(a-b) << endl;
    }
    
    return 0;
}