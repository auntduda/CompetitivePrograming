#include <iostream>

using namespace std;

int main(){
    string nome, zelda = "zelda";
    cin >> nome;
    
    int it = 0;
    bool existe = false;
    for(int i = 0; i < nome.size(); i++){

        if(tolower(nome[i]) == zelda[it]){
            it++;
            if(it == 5){
                existe = true;
                break;
            }
        } else it = 0;
        
    }
    
    if(existe) cout << "Link Bolado" << endl;
    else cout << "Link Tranquilo" << endl;
    
    return 0;
}