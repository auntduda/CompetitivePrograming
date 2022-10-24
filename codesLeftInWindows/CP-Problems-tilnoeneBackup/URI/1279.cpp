#include <bits/stdc++.h>

using namespace std;

vector<string> split(string txt, char key){
    vector<string> ans;
    
    string palTemp = "";
    for(int i = 0; i < txt.size(); i++){
        
        if(txt[i] == key){
            if(palTemp.size() > 0){
                ans.push_back(palTemp);
                palTemp = "";
            }
        } else{
            palTemp += txt[i];
        }
        
    }
    if(palTemp.size() > 0)
        ans.push_back(palTemp);
    
    return ans;
}

void espacos(int qnt){
    for(int i = 0; i < qnt; i++){
        cout << ' ';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k = 1;
    while(cin >> n){
        if(n == 0) break;
        if(k != 1) cout << endl;
        cin.ignore();
        string frase;
        
        vector<string> frases;
        for(int i = 0; i < n; i++){
            getline(cin, frase);
            frases.push_back(frase);
        }
        
        vector<string> linhas;
        int maior = 0;
        for(int i = 0; i < n; i++){
            string temp = "";
            
            vector<string> ans = split(frases[i], ' ');
            
            for(int j = 0; j < ans.size(); j++){
                
                if(j != 0)
                    temp += " ";
                    
                temp += ans[j];
            }
            
            if(temp.size() > maior)
                maior = temp.size();
                
            linhas.push_back(temp);
        }
        
        for(int i = 0; i < n; i++){
            espacos(maior-linhas[i].size());
            cout << linhas[i] << endl;
        }
        
        k++;
    }
    
    return 0;
}