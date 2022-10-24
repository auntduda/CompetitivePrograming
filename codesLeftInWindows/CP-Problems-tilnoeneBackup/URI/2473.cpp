#include <iostream>

using namespace std;

int main() {
    int n[8], s[8], acertos = 0;
    
    for(int i = 0; i < 6; i++) cin >> n[i];
    for(int i = 0; i < 6; i++) cin >> s[i];
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(n[i] == s[j]){
                acertos++;
                break;
            }
        }
    }
    
    if(acertos < 3) cout << "azar" << endl;
    else if(acertos == 3) cout << "terno" << endl;
    else if(acertos == 4) cout << "quadra" << endl;
    else if(acertos == 5) cout << "quina" << endl;
    else cout << "sena" << endl;
    
    return 0;
}