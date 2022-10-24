#include <iostream>
#include <algorithm>

using namespace std;

bool org(string a, string b){
    if(a.size() == b.size()){
        return a < b;
    }
    return a.size() < b.size();
}

int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        
        string pal[100010];
        for(int i = 0; i < n; i++){
            cin >> pal[i];
        }
        
        sort(pal, pal+n, org);
        
        bool existe = true;
        for(int i = 0; i < n-1 && existe; i++){
            for(int j = i+1; j < n; j++){
                
                //cout << pal[i] << " " << pal[j] << endl;
                
                // percorre as palavras
                bool sub = true;
                for(int it = 0; it < pal[i].size(); it++){
                    
                    if(pal[i][it] != pal[j][it]){
                        //cout << pal[i][it] << " " << pal[j][it] << endl;
                        sub = false;
                        break;
                    }
                }
                
                if(sub){
                    existe = false;
                    break;
                }
                
            }
        }
    
        if(existe) cout << "Conjunto Bom" << endl;
        else cout << "Conjunto Ruim" << endl;
      
    }
    
    return 0;
}