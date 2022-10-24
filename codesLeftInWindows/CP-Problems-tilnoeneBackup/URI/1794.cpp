#include <iostream>

using namespace std;

int main(){
    int n, la, lb, sa, sb;
    cin >> n >> la >> lb >> sa >> sb;
    
    bool possivel = false;
    
    int np = n;

    if(np >= la && np <= lb && n >= sa && n <= sb) possivel = true;
    
    if(possivel) cout << "possivel" << endl;
    else cout << "impossivel" << endl;
    
    return 0;
}