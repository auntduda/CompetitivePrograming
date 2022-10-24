#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    string frase;
    
    while(getline(cin, frase)){
        map<char, bool> letras;
        for(int i = 0; i < frase.size(); i++){
            letras[frase[i]] = true;
        }
        
        vector<string> intervalos; 
        bool seq = false;
        char con[2];
        
        for(int i = 'a'; i <= 'z'; i++){
            
            if(letras[i]){
                    
                if(!seq){
                    con[0] = i;
                    con[1] = i;
                    seq = true;
                } else{
                    con[1] = i;
                }
                
            } else{
                if(seq) intervalos.push_back(con);
                
                seq = false;
            }
            
        }
        
        if(seq) intervalos.push_back(con);
        
        for(int i = 0; i < intervalos.size(); i++){
            cout << intervalos[i][0] << ':' << intervalos[i][1];
            if(i != intervalos.size()-1) cout << ", ";
        }
        
        cout << endl;
    }
    
    return 0;
}