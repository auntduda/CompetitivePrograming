#include <iostream>

using namespace std;

int main(){
    int v, pares=0, impares=0;
    int par[5];
    int impar[5];
    
    for(int i=0;i<15;i++){
        cin >> v;
        if(v%2==0){
            par[pares]=v;
            pares++;
        } else{
            impar[impares]=v;
            impares++;
        }
        if(i==14){
            for(int k=0;k<impares;k++){
                cout << "impar[" << k << "] = " << impar[k] << endl;
            }
            for(int k=0;k<pares;k++){
                cout << "par[" << k << "] = " << par[k] << endl;
            }
        }
        if(pares==5){
            for(int k=0;k<5;k++){
                cout << "par[" << k << "] = " << par[k] << endl;
                pares=0;
            }
        }
        if(impares==5){
            for(int k=0;k<5;k++){
                cout << "impar[" << k << "] = " << impar[k] << endl;
                impares=0;
            }
        }
    }

    return 0;
}