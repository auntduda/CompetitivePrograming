#include <iostream>
#include <map>
#include <vector>

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
    
    return ans;
}

map<char, double> notas = {{'W', 1}, {'H', 1/2.0}, {'Q', 1/4.0}, {'E', 1/8.0}, {'S', 1/16.0}, {'T', 1/32.0}, {'X', 1/64.0}};

double calculaDuracao(string cmp){
    
    double res = 0;
    for(int i = 0; i < cmp.size(); i++){

        res += notas[cmp[i]];
    }
    
    return res;
}

int main(){
    string linha;
    
    while(true){
        cin >> linha;
        if(linha == "*") break;
        
        vector<string> compassos = split(linha, '/');
        
        int tot = 0;
        for(auto cmp: compassos)
            if(calculaDuracao(cmp) == 1) tot += 1;
        
        cout << tot << endl;
        
    }
    
    return 0;
}