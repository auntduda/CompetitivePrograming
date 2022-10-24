#include <iostream>

using namespace std;

bool vogal(char l){
    if(l == 'a' or l == 'e' or l == 'i' or l == 'o' or l == 'u')
        return true;
    return false;
}

string retira_vogais(string frase){
    string ans = "";
    
    for(int i = 0; i < frase.size(); i++){
        if(vogal(frase[i])){
            ans += frase[i];
        }
    }
    
    return ans;
}

string inverte(string txt){
    string ans = "";
    
    for(int i = txt.size()-1; i >= 0; i--){
        ans += txt[i];
    }
    
    return ans;
}

int main(){
    string frase, ori, inv;
    cin >> frase;
    
    ori = retira_vogais(frase);
    inv = inverte(ori);
    
    if(ori == inv) 
        cout << 'S' << endl;
    else 
        cout << 'N' << endl;
    
    return 0;
}