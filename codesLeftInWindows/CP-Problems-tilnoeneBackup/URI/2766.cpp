#include <iostream>

using namespace std;

int main(){
    string nome;
    for(int i=0;i<10;i++){
        cin >> nome;
        if(i==2 or i==6 or i==8){
            cout << nome << endl;
        }
    }

    return 0;
}