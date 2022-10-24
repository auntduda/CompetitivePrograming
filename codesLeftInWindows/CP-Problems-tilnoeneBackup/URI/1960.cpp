#include <iostream>

using namespace std;

int ctoi(char n){ return int(n)-48;}

void romano(int n, int c){ // digito(1-9) - casa(1-3)
    if(c==1){ // U
        if(n==9) cout << "IX";
        else if(n==4) cout << "IV";
        else{
            if(n>=5){
                cout << "V";
                n-=5;
            }
            for(int i=0;i<n;i++) cout << "I";
        }
    } else if(c==2){ // D
        if(n==9) cout << "XC";
        else if(n==4) cout << "XL";
        else{
            if(n>=5){
                cout << "L";
                n-=5;
            }
            for(int i=0;i<n;i++) cout << "X";
        }
    } else{ // C
        if(n==9) cout << "CM";
        else if(n==4) cout << "CD";
        else{
            if(n>=5){
                cout << "D";
                n-=5;
            }
            for(int i=0;i<n;i++) cout << "C";
        }
    }
}

int main(){
    string num;
    cin >> num;
    int tam = num.size(), zeros=1;
    for(int i=1;i<tam;i++){
        zeros*=10;
    }
    
    for(int i=0;i<tam;i++){
        romano(ctoi(num[i]), tam-i);
    }
    cout << endl;

    return 0;
}