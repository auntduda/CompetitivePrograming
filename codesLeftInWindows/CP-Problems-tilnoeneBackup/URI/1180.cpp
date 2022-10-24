#include <iostream>

using namespace std;

int main(){
    int n, x, menor, pos=0;
    cin >> n;
    cin >> menor;
    for(int i=1;i<n;i++){
        cin >> x;
        if(x<menor){
            menor=x;
            pos=i;
        }
    }
    cout << "Menor valor: " << menor << endl << "Posicao: " << pos << endl;

    return 0;
}