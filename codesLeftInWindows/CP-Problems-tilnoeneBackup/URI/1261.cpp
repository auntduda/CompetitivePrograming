#include <iostream>
#include <vector>
#include <map>

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
    ans.push_back(palTemp);
    
    return ans;
}

int main(){
    int n, t, v;
    cin >> n >> t;
    map<string, int> cargos;
    
    string cargo, frase;
    for(int i = 0; i < n; i++){
        cin >> cargo >> v;
        cargos[cargo] = v;
    }
    
    cin.ignore();
    int tot = 0;
    
    while(true){
        getline(cin, frase);
        if(frase == "."){
            t--;
            
            cout << tot << endl;
            tot = 0;
            if(t == 0) break;
        } else{
            vector<string> palavras = split(frase, ' ');
            
            for(auto pal: palavras)
                tot += cargos[pal];
        }
    }

    return 0;
}