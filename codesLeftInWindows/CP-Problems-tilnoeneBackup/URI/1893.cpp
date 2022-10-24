#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    if(b >= 0 && b <= 2) cout << "nova" << endl;
    else if(b >= 97 && b <= 100) cout << "cheia" << endl;
    else{
        if(a > b) cout << "minguante" << endl;
        else cout << "crescente" << endl;
    }
    
    return 0;
}