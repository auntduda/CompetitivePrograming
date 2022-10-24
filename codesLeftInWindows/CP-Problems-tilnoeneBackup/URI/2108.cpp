#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    string frase, temp, maior = "";
    
    while(getline(cin, frase)){
        if(frase == "0") break;
        
        stringstream str_strm(frase);
        
        vector<int> tam;
        while(str_strm >> temp){
            tam.push_back(temp.size());
            
            if(temp.size() >= maior.size())
                maior = temp;
        }
        
        for(int i = 0; i < tam.size(); i++){
            cout << tam[i];
            if(i == tam.size()-1) cout << endl;
            else cout << '-';
        }
        
    }
    
    cout << endl << "The biggest word: " << maior << endl;
    
    return 0;
}