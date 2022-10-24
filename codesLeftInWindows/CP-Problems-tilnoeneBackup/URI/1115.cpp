#include <iostream>

using namespace std;

int main(){
    int x, y;
    while(true){
        cin >> x >> y;
        if(x==0 or y==0){
            break;
        }
        if(x>0){
            if(y>0){
                cout << "primeiro";
            } else{
                cout << "quarto";
            }
        } else{
            if(y>0){
                cout << "segundo";
            } else{
                cout << "terceiro";
            }
        }
        cout << endl;
    }

    return 0;
}