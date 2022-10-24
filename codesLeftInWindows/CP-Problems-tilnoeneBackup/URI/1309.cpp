#include <iostream>

using namespace std;

int main(){
    string dollarsOrig;
    int cents;
    
    while(cin >> dollarsOrig){
        cin >> cents;
        string dollars = "", val = "";
        
        cout << '$';
        
        for(int i = 0; i < dollarsOrig.size(); i++){
            if(dollarsOrig[i] == '0' && dollars.size() == 0) continue;
            dollars += dollarsOrig[i];
        }
        
        int it = 1;
        for(int i = 1; i <= dollars.size(); i++){
    
            val += dollars[dollars.size()-i];
            if(it % 3 == 0 && it != dollars.size()) val += ',';
            
            it++;
        }
        
        if(val.size() == 0) cout << '0';
        for(int i = val.size()-1; i >= 0; i--) cout << val[i];
        
        cout << '.';
        if(cents < 10) cout << '0';
        cout << cents << endl;
        
    }
    
    return 0;
}