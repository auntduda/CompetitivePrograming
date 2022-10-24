#include <iostream>

using namespace std;

int main() {
    double o, b, i;
    cin >> o >> b >> i;
    
    if(o < b){
        if(o < i) cout << "Otavio" << endl;
        else if(o > i) cout << "Ian" << endl;
        else cout << "Empate" << endl;
    } else if(o > b){
        if(b < i) cout << "Bruno" << endl;
        else if(b > i) cout << "Ian" << endl;
        else cout << "Empate" << endl;
    } else cout << "Empate" << endl;
    
    return 0;
}