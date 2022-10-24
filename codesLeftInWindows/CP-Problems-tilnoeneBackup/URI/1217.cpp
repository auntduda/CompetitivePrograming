#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    double pesoTotal = 0, gastoTotal = 0, peso, valor;
    string prod;
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> valor;
        gastoTotal += valor;
        
        cin.ignore();
        getline(cin, prod);
        
        int frutas = 1;
        for(int i = 0; i < prod.size(); i++)
            if(prod[i] == ' ') frutas++;
        
        pesoTotal += frutas;
        cout << "day " << i << ": " << frutas << " kg" << endl;
        
    }
    
    cout << pesoTotal/n << " kg by day" << endl;
    cout << "R$ " << gastoTotal/n << " by day" << endl;
    
    return 0;
}