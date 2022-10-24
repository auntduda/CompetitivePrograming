#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    cin.ignore();
    
    string arvore;
    getline(cin, arvore);
    
    for(int i = 1; i <= n; i++){
        if(i != 1) cout << endl;
        double tot = 0;
        
        vector<string> arvores;
        map<string, int> tipos;
        
        while(true){
            getline(cin, arvore);
            if(arvore.size() == 0) break;
            
            if(tipos[arvore] == 0){
                arvores.push_back(arvore);
            }
            
            tipos[arvore]++;
            tot++;
        }
        
        sort(arvores.begin(), arvores.end());
        
        cout.precision(4);
        cout.setf(ios::fixed);
        for(int j = 0; j < arvores.size(); j++){
            cout << arvores[j] << " " << (tipos[arvores[j]]*100) / tot << endl;
        }
        
    }
    
    return 0;
}