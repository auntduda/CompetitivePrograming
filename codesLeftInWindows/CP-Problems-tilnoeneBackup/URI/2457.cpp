#include <iostream>

using namespace std;

int main(){
    char l;
    string frase;
    
    cin >> l;
    cin.ignore();
    cin.ignore();
    getline(cin, frase);
    
    double npal = 1, npalC = 0;
    bool ok = true;
    for(int i = 0; i < frase.size(); i++){
        if(frase[i] == ' '){
            npal++;
            ok = true;
        }
        
        if(frase[i] == l && ok){
            npalC++;
            ok = false;
        }
        
    }
    
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << (100*npalC) / npal << endl; 


    return 0;
}