#include <iostream>

using namespace std;

int lpos(char l){ return int(l)-64;}

int main(){
    string s;
    
    while(cin >> s){
        
        int size = s.size(), v = 0;
        bool existe = true;
        
        if(size == 3 && (s[0] > 'X'  or (s[0] == 'X' && s[1] > 'F') or (s[0] == 'X' && s[1] == 'F' && s[2] > 'D'))) existe = false;
        else if(size < 3) existe = true;
        else if(size > 3) existe = false;
        
        if(existe){
            
            if(size == 3){
                v = lpos(s[0]) * 26 * 26 + lpos(s[1]) * 26 + lpos(s[2]);
            } else if(size == 2){
                v = lpos(s[0]) * 26 + lpos(s[1]);
            } else{
                v = lpos(s[0]);
            }

            cout << v << endl;
            
        } else cout << "Essa coluna nao existe Tobias!" << endl;
            
    }
    
    return 0;
}