#include <iostream>

using namespace std;

int main(){
    int n, k=1;
    while(true){
        cin >> n;
        if(n==0) break;
        cin.ignore();
        string exp, numAtual="0";
        int soma = 0;
        getline(cin, exp);

        for(int i=0;i<exp.size();i++){
            if(exp[i]=='+' || exp[i]=='-'){
                soma+=stoi(numAtual);
                numAtual="";
            }
            numAtual+=exp[i];
            if(i==exp.size()-1){
                soma+=stoi(numAtual);
            }
        }
        if(k!=1) cout << endl;
        cout << "Teste " << k << endl;
        cout << soma << endl;
        k++;
    }

    return 0;
}