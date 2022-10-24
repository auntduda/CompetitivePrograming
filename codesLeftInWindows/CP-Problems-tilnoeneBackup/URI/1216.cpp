#include <iostream>

using namespace std;

int main(){
    string nome;
    int it = 0, v;
    double total = 0;
    
    while(getline(cin, nome)){
        cin >> v;

        total += v;
        cin.ignore();
        it++;    
    }
    
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << total/it << endl;
    
    return 0;
}