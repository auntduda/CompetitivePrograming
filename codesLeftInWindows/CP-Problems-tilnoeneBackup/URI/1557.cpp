#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        int c=0, m=pow(2.0,2*n-2);
        string maior=to_string(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int valor = pow(2, j+c);
                int tam = to_string(valor).size();
                for(int k=0;k<maior.size()-tam;k++){
                    cout << " ";
                }
                cout << valor;
                if(j==n-1){
                    cout << endl;
                } else{
                    cout << " ";
                }
            }
            c++;
        }
        cout << endl;
    }

    return 0;
}