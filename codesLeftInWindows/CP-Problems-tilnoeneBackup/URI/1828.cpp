#include <iostream>

using namespace std;

int jogo(string a, string b){
    if(a==b){
        return 2;
    }
    if(a=="tesoura" && b=="papel") return 1;
    if(a=="papel" && b=="pedra") return 1;
    if(a=="pedra" && b=="lagarto") return 1;
    if(a=="lagarto" && b=="Spock") return 1;
    if(a=="Spock" && b=="tesoura") return 1;
    if(a=="tesoura" && b=="lagarto") return 1;
    if(a=="lagarto" && b=="papel") return 1;
    if(a=="papel" && b=="Spock") return 1;
    if(a=="Spock" && b=="pedra") return 1;
    if(a=="pedra" && b=="tesoura") return 1;
    return 0;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s, r;
        cin >> s >> r;
        cout << "Caso #" << i+1 << ": ";
        int res = jogo(s, r);
        if(res==2){
            cout << "De novo!" << endl;
        } else if(res==1){
            cout << "Bazinga!" << endl;
        } else{
            cout << "Raj trapaceou!" << endl;
        }
    }
    
    return 0;
}