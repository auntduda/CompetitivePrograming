#include <iostream>

using namespace std;

int main(){
    string senha;
    while(getline(cin, senha)){
        bool maiusc = false, minusc = false, num = false, existe = true; 
        
        if(senha.size() < 6 or senha.size() > 32) existe = false;
        
        for(int i = 0; i < senha.size() && existe; i++){
            if(isalpha(senha[i])){
                if(isupper(senha[i])) maiusc = true;
                else minusc = true;
            } else if(isdigit(senha[i])) num = true;
            else existe = false;
        }
        
        if(existe && maiusc && minusc && num) cout << "Senha valida." << endl;
        else cout << "Senha invalida." << endl;

    }
    
    return 0;
}