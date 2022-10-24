#include <iostream>

using namespace std;

int main(){
    string cpf;
    
    while(cin >> cpf){
        
        int b1 = 0, b2 = 0;
        for(int i = 0; i < 9; i++)
            b1 += (int(cpf[i])-48)*(i+1);       
        
        b1 %= 11;
        if(b1 == 10) b1 = 0;
        
        for(int i = 0; i < 9; i++)
            b2 += (int(cpf[i])-48)*(10-(i+1));       
        
        b2 %= 11;
        if(b2 == 10) b2 = 0;
        
        for(int i = 1; i <= 9; i++){
            cout << cpf[i-1];
            if(i % 3 == 0 && i != 9) cout << '.';    
        }
        cout << '-' << b1 << b2 << endl;
        
    }
    
    return 0;
}