#include <iostream>

using namespace std;

int main(){
    string linha;
    getline(cin, linha);
    
    int it = 1;
    for(int i = 0; i < linha.size(); i++){
        if(linha[i] != ' '){
            if(it % 2 == 0) cout << linha[i];
            it++;
        } else cout << ' ';
    }
    cout << endl;
    
    return 0;
}