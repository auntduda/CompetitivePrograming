#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string frase;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, frase);
        
        vector<string> pal;
        string palTemp = "";
        for(int i = 0; i < frase.size()-1; i++){
            if(frase[i] != ' ') palTemp+=frase[i];
            else{
                pal.push_back(palTemp);
                palTemp = "";
            }
        }
        if(frase[frase.size()-1]!=' ') palTemp+=frase[frase.size()-1];
        if(palTemp.size()>0) pal.push_back(palTemp);
        
        vector<string> ord[55];
        
        for(int i = 0; i < pal.size(); i++)
            ord[pal[i].size()].push_back(pal[i]);
        
        int menor;
        for(int i = 1; i <= 50; i++){
            if(ord[i].size() > 0){
                menor = i;
                break;
            }
        }
        
        for(int i = 50; i >= menor; i--){
            for(int j=0; j < ord[i].size(); j++){
                cout << ord[i][j];
                
                if(i == menor && j == ord[i].size()-1) cout << endl;
                else cout << " ";
            }
        }
    }
    
    return 0;
}