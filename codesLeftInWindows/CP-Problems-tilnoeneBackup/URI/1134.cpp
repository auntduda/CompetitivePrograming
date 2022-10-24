#include <iostream>

using namespace std;

int main(){
    int e, alc=0, gas=0, die=0;
    while(true){
        cin >> e;
        if(e==4){
            break;
        } else if(e==1){
            alc++;
        } else if(e==2){
            gas++;
        } else if(e==3){
            die++;
        }
    }
    cout << "MUITO OBRIGADO" << endl << "Alcool: " << alc << endl << "Gasolina: " << gas << endl << "Diesel: " << die << endl;

    return 0;
}