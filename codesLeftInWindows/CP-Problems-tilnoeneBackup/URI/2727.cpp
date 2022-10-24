#include <iostream>

using namespace std;

int main() {
    int n;
    while(cin >> n){
        string letra;
        cin.ignore();
        for(int i=0;i<n;i++){
            getline(cin, letra);
            int pontos = 0, esp = 0;
            for(int j=0;j<letra.size();j++){
                if(letra[j]==' ') break;
                else pontos++;
            }
            for(int j=0;j<letra.size();j++){
                if(letra[j]==' ') esp++;
            }
            
            int letra = 97+3*(esp)+(pontos-1);
            cout << (char)letra << endl;
            
        }
    }
    
    return 0;
}