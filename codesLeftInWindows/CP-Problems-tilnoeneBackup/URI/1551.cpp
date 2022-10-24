#include <iostream>

using namespace std;

int main() {
    int n;
    string frase, snum;
    
    getline(cin, snum);
    n = stoi(snum);
    for(int i=0;i<n;i++){
        int letras[26] = {}, dif=0;
        
        getline(cin, frase);
        for(int j=0;j<frase.size();j++){
            letras[int(tolower(frase[j]))-97]++;
        }

        for(int j=0;j<26;j++){
            if(letras[j]>0){
                dif++;
            }  
        }
        
        cout << "frase ";
        if(dif==26){
            cout << "completa" << endl;
        } else if(dif>=13){
            cout << "quase completa" << endl;
        } else{
            cout << "mal elaborada" << endl;
        }
    }
    
    return 0;
}