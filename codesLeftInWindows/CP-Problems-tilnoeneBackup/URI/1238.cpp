#include <iostream>

using namespace std;

int main(){
    int n;
    string a, b;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        int tam=a.size(), maior=b.size();
        if(tam>b.size()){
            tam=b.size();
            maior=a.size();
        }
        int k=0, p=0;
        for(int j=0;j<tam*2;j++){
            if(j%2==0){
                cout << a[k];
                k++;
            } else{
                cout << b[p];
                p++;
            }
        }
        if(b.size()==maior){
            a=b;
        }

        for(int j=tam;j<maior;j++){
            cout << a[j];
        }
        cout << endl;
    }

    return 0;
}