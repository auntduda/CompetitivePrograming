#include <iostream>

using namespace std;

void espacos(int i){
    for(int k = 0; k < i; k++) cout << ' ';
}

void amuleto(string pal){
    int tamT = pal.size() + pal.size()-1;
    
    for(int i = 0; i < pal.size(); i++){
        espacos(i);
        
        for(int j = 0; j < pal.size() - i; j++){
            cout << pal[j];
            
            if(j == pal.size() - i - 1) cout << endl;
            else cout << " ";
        }    
    }
    
}

int main() {
    string p;
    
    while(cin >> p){
        
        amuleto(p);
        cout << endl;
        
    }
    
    return 0;
}