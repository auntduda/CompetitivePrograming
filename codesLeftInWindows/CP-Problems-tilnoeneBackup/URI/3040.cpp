#include <iostream>

using namespace std;

int main(){
    int n, a, b, c;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        if(a>=200 && a<=300 && b>=50 && c>=150){
            cout << "Sim" << endl;
        } else{
            cout << "Nao" << endl;
        }
    }

    return 0;
}