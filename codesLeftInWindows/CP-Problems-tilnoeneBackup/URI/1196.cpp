#include <iostream>

using namespace std;

void inverteCaractere(char letra){
    if(letra == ' '){
        cout << letra;
        return;
    }
    
    string teclado[4] = {"`1234567890-=", "QWERTYUIOP[]\\", "ASDFGHJKL;'", "ZXCVBNM,./"};
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < teclado[i].size(); j++){
            if(teclado[i][j] == letra){
                cout << teclado[i][j-1]; 
                return;
            }
        }    
    }
    
}

int main(){
    string txt;
    
    while(getline(cin, txt)){
        if(txt.size() > 0){
            for(int i = 0; i < txt.size(); i++)
                inverteCaractere(txt[i]);
                
            cout << endl;
        }
    }
    
    return 0;
}