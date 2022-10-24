#include <iostream>

using namespace std;

int main() {
    int n, h=0, m=0;
    string nome;
    char sexo;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> nome >> sexo;
        if(sexo=='F'){
            m++;
        } else{
            h++;
        }
    }
    cout << h << " carrinhos" << endl << m << " bonecas" << endl;
    
    return 0;
}