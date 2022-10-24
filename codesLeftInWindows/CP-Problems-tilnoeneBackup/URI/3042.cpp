#include <iostream>

using namespace std;

int main() {
    while(true){
        int m, pos=1, mov=0, linha, menor, posd;
        cin >> m;
        if(m==0) break;
        for(int i=0;i<m;i++){
            menor = 3;
            for(int j=0;j<3;j++){
                cin >> linha;
                if(linha==0 && abs(j-pos)<menor){
                    menor = abs(j-pos);
                    posd = j;
                }
            }
            pos = posd;
            mov+=menor;
        }
        cout << mov << endl;
    }
 
    return 0;
}