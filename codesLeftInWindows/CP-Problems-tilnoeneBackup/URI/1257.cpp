#include <iostream>

using namespace std;

int main(){
    string letras;
    int n, l, soma;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> l;
        soma=0;
        for(int j=0;j<l;j++){
            cin >> letras;
            for(int k=0;k<letras.size();k++){
                soma+=(int(letras[k])-65)+k+j;
            }

        }
        cout << soma << endl;
    }

    return 0;
}