#include <iostream>

using namespace std;

int main(){
    int x, z, soma=0, i=0;
    cin >> x;
    while(true){
        cin >> z;
        if(z>x){
            break;
        }
    }
    while(soma<z){
        soma+=i+x;
        i++;
    }
    cout << i << endl;

    return 0;
}