#include <iostream>

using namespace std;

int vitamina(string alimento){
    if(alimento=="suco de laranja"){
        return 120;
    } else if(alimento=="morango fresco"){
        return 85;
    } else if(alimento=="mamao"){
        return 85;
    } else if(alimento=="goiaba vermelha"){
        return 70;
    } else if(alimento=="manga"){
        return 56;
    } else if(alimento=="laranja"){
        return 50;
    } else if(alimento=="brocolis"){
        return 34;
    }
}

int main(){
    while(true){
        int t, q, soma=0;
        string alimento;
        cin >> t;
        if(t==0){
            break;
        }
        for(int i=0;i<t;i++){
            cin >> q;
            cin.ignore();
            getline(cin, alimento);
            soma+=q*vitamina(alimento);
        }
        
        if(soma<110){
            cout << "Mais " << 110-soma << " mg" << endl;
        } else if(soma>130){
            cout << "Menos " << soma-130 << " mg" << endl;
        } else{
            cout << soma << " mg" << endl;
        }
    }

    return 0;
}