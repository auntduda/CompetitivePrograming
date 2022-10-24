#include <iostream>

using namespace std;

int main(){
    int x, i;
    cin >> x;

    if(x%2==0){
        for(i=1;i<x;i+=2){
            cout << i << endl;
        }
    } else {
        for(i=1;i<=x;i+=2){
            cout << i << endl;
        }
    }


    return 0;
}
