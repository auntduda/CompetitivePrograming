#include <iostream>

using namespace std;

int main(){
    int n, v1, v2;
    string res, nomes[4];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> nomes[0] >> nomes[1] >> nomes[2] >> nomes[3];
        cin >> v1 >> v2;
        if((v1+v2)%2==0){
            res="PAR";
        } else{
            res="IMPAR";
        }
        if(res==nomes[1]){
            cout << nomes[0] << endl;
        } else{
            cout << nomes[2] << endl;
        }
    }

    return 0;
}