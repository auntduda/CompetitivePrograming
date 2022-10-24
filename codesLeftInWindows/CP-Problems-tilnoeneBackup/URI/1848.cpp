#include <iostream>
#include <bitset>

using namespace std;

int decimal(string bin){
    int n=8, d=2;
    
    return n;
}

int main() {
    int gritos=0, soma=0;
    string linha;
    while(gritos!=3){
        getline(cin, linha);
        string numb;
        if(linha.size()==3){
            if(linha[0]=='*'){
                numb+="1";
            } else{
                numb+="0";
            }
            if(linha[1]=='*'){
                numb+="1";
            } else{
                numb+="0";
            }
            if(linha[2]=='*'){
                numb+="1";
            } else{
                numb+="0";
            }
            bitset<8> a(numb);
            soma+=a.to_ulong();
        } else{
            cout << soma << endl;
            soma=0;
            gritos++;
        }
    }
    
    return 0;
}
