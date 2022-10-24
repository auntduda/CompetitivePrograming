#include <iostream>

using namespace std;

int main(){
    int n, soma;
    while(true){
        cin >> n;
        if(n==0){
            break;
        } else if(n==1){
            cout << 1 << endl;
        } else{
            soma=0;
            for(int i=1;i<=n;i++){
                soma+=i*i;
            }
            cout << soma << endl;
        }
    }

    return 0;
}