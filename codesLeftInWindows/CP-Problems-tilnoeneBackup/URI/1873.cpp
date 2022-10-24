#include <iostream>

using namespace std;

int vencedor(string a, string b){ // retorna 0, 1 ou 2
    if(a=="tesoura" && b=="papel") return 1;
    if(b=="tesoura" && a=="papel") return 2;
    if(a=="papel" && b=="pedra") return 1;
    if(b=="papel" && a=="pedra") return 2;
    if(a=="pedra" && b=="lagarto") return 1;
    if(b=="pedra" && a=="lagarto") return 2;
    if(a=="lagarto" && b=="spock") return 1;
    if(b=="lagarto" && a=="spock") return 2;
    if(a=="spock" && b=="tesoura") return 1;
    if(b=="spock" && a=="tesoura") return 2;
    if(a=="tesoura" && b=="lagarto") return 1;
    if(b=="tesoura" && a=="lagarto") return 2;
    if(a=="lagarto" && b=="papel") return 1;
    if(b=="lagarto" && a=="papel") return 2;
    if(a=="papel" && b=="spock") return 1;
    if(b=="papel" && a=="spock") return 2;
    if(a=="spock" && b=="pedra") return 1;
    if(b=="spock" && a=="pedra") return 2;
    if(a=="pedra" && b=="tesoura") return 1;
    if(b=="pedra" && a=="tesoura") return 2;
    return 0;
}

int main() {
    int n;
    cin >> n;
    string p1, p2;
    for(int i=0;i<n;i++){
        cin >> p1 >> p2;
        int res = vencedor(p1, p2);
        if(res==0) cout << "empate" << endl;
        else if(res==1) cout << "rajesh" << endl;
        else cout << "sheldon" << endl;
    }
    
    return 0;
}