#include <iostream>

using namespace std;

int main(){
    int i, j;
    cin >> i >> j;
    if(i%2!=0){
        if(j%2==0){
            cout << 0 << endl;
        } else{
            cout << 1 << endl;
        }
    } else{
        if(j%2==0){
            cout << 1 << endl;
        } else{
            cout << 0 << endl;
        }
    }

    return 0;
}