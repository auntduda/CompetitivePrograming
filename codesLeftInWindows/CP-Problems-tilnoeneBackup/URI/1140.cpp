#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string frase;
    while(true){
        getline(cin, frase);
        if(frase=="*") break;
        
        stringstream pal(frase);
        vector<string> palavras;
        string temp;
        
        while(pal >> temp) palavras.push_back(temp);
        
        bool val = true;
        char ant = toupper(palavras[0][0]);
        
        for(int i=1;i<palavras.size();i++){
            if(toupper(palavras[i][0])!=ant){
                val = false;
                break;
            }
        }
        
        if(val) cout << 'Y' << endl;
        else cout << 'N' << endl;
        
    }
    
    return 0;
}