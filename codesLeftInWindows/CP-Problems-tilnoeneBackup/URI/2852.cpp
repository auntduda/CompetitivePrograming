#include <iostream>
#include <vector>

using namespace std;

int main(){
    char cifra[26][26];
    int ini=0;
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            if((j+ini)+97>122){
                cifra[i][j] = (j+ini+97)-26;
            } else{
                cifra[i][j] = (j+ini)+97;
            }
            //cout << cifra[i][j] << " ";
        }
        //cout << endl;
        ini++;
    }
    
    string chave, frase, senha;
    int n;
    cin >> chave >> n;
    cin.ignore();
    for(int i=0;i<n;i++){
        senha = "";
        getline(cin, frase);
        while(senha.size()<frase.size()){
            senha+=chave;
        }
        bool pal = false, ini=false;
        int k=0;
        for(int j=0;j<frase.size();j++){
            if(frase[j]==' ') pal = false;
            else{
                if(pal==false){
                    if(frase[j]=='a' or frase[j]=='e' or frase[j]=='i' or frase[j]=='o' or frase[j]=='u') ini = false;
                    else ini = true;
                    pal = true;
                }
            }
            
            //cout << cifra[int(senha[3])-97][int(frase[3])-97] << " " << frase[3] << endl;
            
            if(pal && ini){
                cout << cifra[int(senha[j-k])-97][int(frase[j])-97];
            }else{
                cout << frase[j];
                k++;
            }
        }
        cout << endl;
        
        //cout << frase << endl << senha << endl;
    }
    
    
    return 0;
}