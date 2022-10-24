#include <iostream>

using namespace std;

int main(){
    int k = -1;
    
    string l;
    while(true){
        getline(cin, l);
        
        bool esp = false;
        for(int i = 0; i < l.size(); i++){
            if(l[i] == ' '){
                esp = true;
                break;
            }
        }
        
        if(esp){
            k++;
        } else{
            if(k != -1) cout << k << endl;
            
            k = 0;
            if(l == "0") break;
        }
        
    }
    
    return 0;
}