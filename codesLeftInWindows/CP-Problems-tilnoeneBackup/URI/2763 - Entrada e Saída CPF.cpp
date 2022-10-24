#include <iostream>

using namespace std;

int main(){
    string cpf;
    cin >> cpf;

    for(int i=0;i<cpf.size();i++){
        if(cpf[i]=='-' or cpf[i]=='.'){
            cout << endl;
            continue;
        }
        cout << cpf[i];
    }
    cout << endl;
}
