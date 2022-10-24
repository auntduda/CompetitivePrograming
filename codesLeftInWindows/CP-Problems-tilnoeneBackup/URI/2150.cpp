#include <iostream>
#include <map>

using namespace std;

int main(){
    string vog, frase;
    while(cin >> vog){
        cin.ignore();
        getline(cin, frase);
        
        map<char, bool> existe;
        for(int i = 0; i < vog.size(); i++){
            existe[vog[i]] = true;
        }
        
        int vog = 0;
        for(int i = 0; i < frase.size(); i++)
            if(existe[frase[i]]) vog++;
        
        cout << vog << endl;
        
    }
    
    return 0;
}