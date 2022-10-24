#include <iostream>

using namespace std;

int main(){
    
    string frase;
    getline(cin, frase);
    
    for(int i = 0; i < frase.size()-2; i++){
        if(frase[i] == frase[i+2] && frase[i+1] == frase[i+3]){
            cout << frase[i] << frase[i+1];
            i += 3;
        } else{
            cout << frase[i];
        }
    }
    
    cout << frase[frase.size()-2] << frase[frase.size()-1] << endl;
    
    return 0;
}