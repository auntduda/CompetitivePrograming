#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    double gd, soma, notas[7];
    string nome;
    for(int i=0;i<n;i++){
        soma=0;
        cin >> nome >> gd;
        for(int j=0;j<7;j++){
            cin >> notas[j];
        }
        sort(notas, notas+7);
        for(int j=1;j<6;j++){
            soma+=notas[j];
        }
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << nome << " " << soma*gd << endl;
    }
    return 0;
}