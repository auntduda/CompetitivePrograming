#include <iostream>

using namespace std;

int main(){
    int i, atual, maior, posicao=1;
    cin >> maior;
    for(i=1;i<100;i++){
        cin >> atual;
        if(atual>maior){
            maior=atual;
            posicao=i+1;
        }
    }
    cout << maior << endl << posicao << endl;

    return 0;
}