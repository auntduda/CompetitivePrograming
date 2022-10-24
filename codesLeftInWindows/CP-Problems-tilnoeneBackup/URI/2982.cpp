#include <iostream>

using namespace std;

int main(){
    int n, i, v, soma=0;
    char e;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> e >> v;
        if(e=='G'){
            soma-=v;
        } else{
            soma+=v;
        }
    }
    if(soma>=0){
        cout << "A greve vai parar." << endl;
    } else{
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    }

    return 0;
}