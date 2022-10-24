#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int menor;
    if(a.size()<b.size()) menor = a.size();
    else menor = b.size();
    for(int i=0;i<menor;i++){
        if((int)a[i]<(int)b[i]){
            cout << a << endl << b << endl;
            break;
        } else if(a[i]!=b[i]){
            cout << b << endl << a << endl;
            break;
        }
        
        if(i==menor-1){
            if(a.size()!=menor) cout << b << endl << a << endl;
            else cout << a << endl << b << endl;
        }
    }

    return 0;
}