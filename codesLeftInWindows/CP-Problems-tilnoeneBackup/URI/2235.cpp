#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(abs(a-b)==0){
        cout << "S" << endl;
    } else if(abs(a-c)==0){
        cout << "S" << endl;
    } else if(abs(b-c)==0){
        cout << "S" << endl;
    } else if(a+b-c==0 or a+b+c==0 or a-b+c==0 or a-b-c==0){
        cout << "S" << endl;
    } else{
        cout << "N" << endl;
    }

    return 0;
}