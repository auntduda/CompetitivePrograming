#include <iostream>

using namespace std;

int main(){
    int a, pos=0, neg=0, par=0, imp=0;
    for(int i=0;i<5;i++){
        cin >> a;
        if(a>0){
            pos++;
        } else if(a<0){
            neg++;
        }
        if(a%2==0){
            par++;
        } else{
            imp++;
        }
    }
    cout << par << " valor(es) par(es)" << endl;
    cout << imp << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}