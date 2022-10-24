#include <iostream>

using namespace std;

int main(){
    long long tot = 0, menorSaldo;
    int n, s;
    
    cin >> n >> menorSaldo;
    tot = menorSaldo;
    while(n--){
        cin >> s;
        tot += s;
        
        if(tot < menorSaldo) menorSaldo = tot;
    }
    
    cout << menorSaldo << endl;
    
    return 0;
}