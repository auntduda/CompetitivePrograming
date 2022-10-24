#include <iostream>

using namespace std;

int main(){
    int n, x, d, maria, joao;
    cin >> n;
    for(int i=0;i<n;i++){
        maria = 0;
        joao = 0;
        for(int j=0;j<3;j++){
            cin >> x >> d;
            joao+=x*d;
        }
        for(int j=3;j<6;j++){
            cin >> x >> d;
            maria+=x*d;
        }
        if(joao>maria){
            cout << "JOAO" << endl;
        } else{
            cout << "MARIA" << endl;
        }
    }

    return 0;
}