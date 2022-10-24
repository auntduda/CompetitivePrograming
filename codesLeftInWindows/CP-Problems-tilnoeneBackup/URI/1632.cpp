#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string senha;
    
    while(n--){
        cin >> senha;
        int pos = 1;
        for(int i = 0; i < senha.size(); i++){
            if(toupper(senha[i]) == 'A' or toupper(senha[i]) == 'E' or toupper(senha[i]) == 'I' or toupper(senha[i]) == 'O' or toupper(senha[i]) == 'S'){
                pos *= 3;
            } else pos *= 2;
        }
        
        cout << pos << endl;
    }
    
    return 0;
}