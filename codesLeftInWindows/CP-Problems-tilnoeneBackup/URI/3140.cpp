#include <iostream>

using namespace std;

int main(){
    string line;
    bool body = false;
    
    while(getline(cin, line)){
        
        if(body){
            // verifica se tá no final da tag, se não printa a linha
            
            for(int i = 0; i < line.size(); i++){
                if(line[i] == '<' && line[i+1] == '/' && line[i+2] == 'b' && line[i+3] == 'o'){
                    body = false;
                    break;
                }
            }
            
            if(body) cout << line << endl;
            
        } else{
            
            // verifica se começa uma tag de elemento <body>
            for(int i = 0; i < line.size(); i++){
                if(line[i] == '<' && line[i+1] == 'b' && line[i+2] == 'o'){
                    body = true;
                    break;
                }
            }
            
        }
        
    }
    
    return 0;
}