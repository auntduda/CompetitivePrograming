#include <iostream>

using namespace std;

int main(){
    int n, i, soma;
    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        if(n%2!=0){
            n++;
        }
        soma=0;
        for(i=0;i<5;i++){
            soma+=n;
            n+=2;
        }
        cout << soma << endl;
    }

    return 0;
}