#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int j=0;j<n;j++){
        int m, p, qnt;
        map<string, double> produtos;
        cin >> m;
        string nome;
        double val, total=0;
        for(int i=0;i<m;i++){
            cin >> nome >> val;
            produtos[nome] = val;
        }
        cin >> p;
        for(int i=0;i<p;i++){
            cin >> nome >> qnt;
            total+=produtos[nome]*qnt;
        }
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << "R$ " << total << endl;
    }
    
    return 0;
}