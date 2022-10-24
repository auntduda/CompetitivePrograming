#include <iostream>

using namespace std;

int main(){
    int n;
    double tempo;
    string nome;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> nome;
        tempo=0;
        tempo+=nome.size()/100.0;
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << tempo << endl;
    }

    return 0;
}