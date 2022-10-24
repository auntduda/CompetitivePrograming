#include <iostream>

using namespace std;

int main(){
    int h, m;
    while(cin >> h){
        cin >> m;
        h/=30;
        m/=6;
        if(h<10){
            cout << "0";
        }
        cout << h << ":";
        if(m<10){
            cout << "0";
        }
        cout << m << endl;
    }
    return 0;
}