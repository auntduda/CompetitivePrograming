#include <iostream>

using namespace std;

int main() {
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;
    if(r==1){ // j1 roubou
        if(a==1){
            cout << "Jogador 2 ganha!" << endl;
        } else{
            cout << "Jogador 1 ganha!" << endl;
        }
    } else{ // j1 nao robou
        if(a==1){
            cout << "Jogador 1 ganha!" << endl;
        } else{
            if((j1+j2)%2==0){
                if(p==1){
                    cout << "Jogador 1 ganha!" << endl;
                } else{
                    cout << "Jogador 2 ganha!" << endl;
                }
            } else{
                if(p==1){
                    cout << "Jogador 2 ganha!" << endl;
                } else{
                    cout << "Jogador 1 ganha!" << endl;
                }
            }
        }
    }
    
    return 0;
}