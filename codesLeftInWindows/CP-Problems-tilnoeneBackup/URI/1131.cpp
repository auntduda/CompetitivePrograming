#include <iostream>

using namespace std;

int main(){
    int gi, gg, escolha=1, jogos=0, vi=0, vg=0, emp=0;
    while(escolha==1){
        jogos++;
        cin >> gi >> gg;
        if(gi>gg){
            vi++;
        } else if(gi<gg){
            vg++;
        } else{
            emp++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> escolha;
    }
    cout << jogos << " grenais" << endl;
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << emp << endl;
    if(vi>vg){
        cout << "Inter venceu mais" << endl;
    } else if(vi<vg){
        cout << "Gremio venceu mais" << endl;
    } else{
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}