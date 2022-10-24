#include <iostream>

using namespace std;

int main(){
    int n;
    string j1, j2;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> j1 >> j2;
        if(j1=="ataque"){
            if(j2=="ataque"){
                cout << "Aniquilacao mutua" << endl;
            } else{
                cout << "Jogador 1 venceu" << endl;
            }
        } else if(j2=="ataque"){
            cout << "Jogador 2 venceu" << endl;
        } else if(j1=="pedra"){
            if(j2=="pedra"){
                cout << "Sem ganhador" << endl;
            } else{
                cout << "Jogador 1 venceu" << endl;
            }
        } else if(j2=="pedra"){
            cout << "Jogador 2 venceu" << endl;
        } else{
            cout << "Ambos venceram" << endl;
        }

    }

    return 0;
}