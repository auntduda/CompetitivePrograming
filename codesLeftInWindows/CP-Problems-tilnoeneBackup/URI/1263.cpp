#include <iostream>
#include <vector>

using namespace std;

int main() {
    string frase;
    while(getline(cin, frase)){
        bool letras[26]={};
        int aliteracoes=0;
        vector<char> iniciais;
        
        bool inicio = true;
        for(int i=0;i<frase.size();i++){
            if(frase[i]!=' ' and inicio){
                iniciais.push_back(tolower(frase[i]));
                inicio=false;
            } else if(frase[i]==' '){
                inicio=true;
            }
        }
        
        char antec = iniciais[0], seq=0;
        for(int i=1;i<iniciais.size();i++){
            if(iniciais[i]==antec){
                seq++;
                if(i==iniciais.size()-1){
                    if(seq>0){
                        aliteracoes++;
                    }
                }
            } else{
                if(seq>0){
                    aliteracoes++;
                }
                seq=0;
            }
            antec=iniciais[i];
        }
        cout << aliteracoes << endl;
    }
}