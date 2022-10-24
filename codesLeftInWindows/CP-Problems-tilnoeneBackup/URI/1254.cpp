#include <iostream>

using namespace std;

int main(){
    string ori, tag, linha;
    
    while(cin >> ori){
        cin >> tag;
        cin.ignore();
        getline(cin, linha);
        
        bool intag = false;
        
        int it = 0;
        string palTemp = "", res = "";
        for(int i = 0; i < linha.size(); i++){

            if(linha[i] == '<'){
                intag = true;
                palTemp = "";
                res += linha[i];
                it = 0;
            } else if(linha[i] == '>'){
                intag = false;
                palTemp = "";
                res += linha[i];
                it = 0;
            } else if(isalpha(linha[i]) && intag){
                //cout << linha[i] << " " << ori[it] << endl;
                
                if(tolower(linha[i]) == tolower(ori[it])){
                    palTemp += linha[i];
    
                    if(it == ori.size()-1){
                        res += tag;
                        it = -1;
                        palTemp = "";
                    }
                    
                    if(i < linha.size()-1 && linha[i+1] == '>'){
                        res += palTemp;
                        palTemp = "";

                    }
                    
                    it++;
                    
                } else{
                    it = 0;
                    palTemp += linha[i];
                    res += palTemp;
                    palTemp = "";
                }
                
            } else res += linha[i];
        }
        
        cout << res << endl;
        
    }
    
    return 0;
}