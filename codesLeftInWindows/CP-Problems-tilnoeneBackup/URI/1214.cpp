#include <iostream>

using namespace std;

int main(){
    int c, n, soma;
    double media, acima;
    cin >> c;
    cout.precision(3);
    cout.setf(ios::fixed);
    for(int i=0;i<c;i++){
        cin >> n;
        acima=0;
        soma=0;
        int v[n];
        for(int j=0;j<n;j++){
            cin >> v[j];
            soma+=v[j]; 
        }
        media=soma/n;
        for(int j=0;j<n;j++){
            if(v[j]>media){
                acima++;
            }
        }
        cout << (acima*100)/n << "%" << endl;
    }

    return 0;
}