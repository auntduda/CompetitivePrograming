#include <iostream>
#include <cmath>

using namespace std;

bool primo(int n){
    if(n==1){
        return false;
    } else if(n==2){
        return true;
    }
    
    if(n%2==0){
        return false;
    }
    for(int i=3;i<n/2+1;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    string numero;
    while(cin >> numero){
        if(primo(stoi(numero))){
            bool val=true;
            for(int i=0;i<numero.size();i++){
                if(!primo(int(numero[i])-48)){
                    val = false;
                    break;
                }
            }
            if(val){
                cout << "Super" << endl;
            } else{
                cout << "Primo" << endl;
            }
        } else{
            cout << "Nada" << endl;
        }
    }
}