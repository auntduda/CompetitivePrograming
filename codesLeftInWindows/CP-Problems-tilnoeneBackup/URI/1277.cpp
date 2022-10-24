#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    while(n--){
        int v;
        cin >> v;
        
        string nome[110], freq[110];
        
        for(int i = 0; i < v; i++)
            cin >> nome[i];
        
        for(int i = 0; i < v; i++)
            cin >> freq[i];
        
        
        vector<string> falt;
        for(int i = 0; i < v; i++){
            
            double f = 0, p = 0;
            for(int j = 0; j < freq[i].size(); j++){
                if(freq[i][j] == 'P') p++;
                else if(freq[i][j] == 'A') f++;
            }
            
            if((p * 100) / (p + f) < 75) falt.push_back(nome[i]);
            
            
        }
        
        for(int j = 0; j < falt.size(); j++){
            cout << falt[j];
            
            if(j != falt.size()-1) cout << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}