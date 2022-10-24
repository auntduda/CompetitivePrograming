#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string num, frase;
    getline(cin, num);
    int n = stoi(num);
    for(int i=0;i<n;i++){
        getline(cin, frase);
        int letras[26] = {};
        int oletras[26] = {};
        for(int j=0;j<frase.size();j++){
            if(isalpha(frase[j])){
                letras[int(tolower(frase[j]))-97]++;
                oletras[int(tolower(frase[j]))-97]++;
            }
        }
        sort(oletras, oletras+26, greater<int>());
        int rep = 1;
        for(int j=1;j<26;j++){
            if(oletras[j]==oletras[j-1]){
                rep++;
            } else{
                break;
            }
        }
        for(int j=0;j<26 && rep>0;j++){
            if(letras[j]==oletras[0]){
                cout << char(j+97);
                rep--;
            }
            if(rep==0){
                cout << endl;
            }
        }
    }
    
    return 0;
}