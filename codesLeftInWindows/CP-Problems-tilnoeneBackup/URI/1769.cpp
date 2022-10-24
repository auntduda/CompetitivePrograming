#include <iostream>

using namespace std;
    
int main(){
    string cpf;
    while(cin >> cpf){
        int b1 = int(cpf[12])-48, b2 = int(cpf[13])-48, sum1 = 0, sum2 = 0, it = 1, prod1 = 0, prod2 = 0;
        
        for(int i = 0; i <= 11; i++){
            if(isdigit(cpf[i])){
                prod1 += it*(int(cpf[i])-48);
                it++;
            }
        }
        
        it = 9;
        
        for(int i = 0; i <= 11; i++){
            if(isdigit(cpf[i])){
                prod2 += it*(int(cpf[i])-48);
                it--;
            }
        }
        
        if(((prod1 % 11 == 10 && b1 == 0) or (prod1 % 11 == b1)) && ((prod2 % 11 == 10 && b2 == 0) or (prod2 % 11 == b2))) cout << "CPF valido" << endl;
        else cout << "CPF invalido" << endl;
    }
    
    return 0;
}