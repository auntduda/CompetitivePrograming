#include <iostream>

using namespace std;

int main(){
    string nome, v;
    //getline(cin, v);
    //int n=int(v[0])-48;
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin, nome);
        if(nome[0]=='T' and nome[1]=='h' and nome[2]=='o' and nome[3]=='r'){
            cout << "S" << endl;
        } else{
            cout << "N" << endl;
        }
    }

    return 0;
}