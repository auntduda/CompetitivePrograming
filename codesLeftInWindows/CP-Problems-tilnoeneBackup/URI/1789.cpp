#include <iostream>

using namespace std;

int main(){
    int n, v, maior;
    while(cin >> n){
        cin >> maior;
        for(int i=1;i<n;i++){
            cin >> v;
            if(v>maior){
                maior=v;
            }
        }
        if(maior<10){
            cout << 1 << endl;
        } else if(maior <20){
            cout << 2 << endl;
        } else{
            cout << 3 << endl;
        }
    }

    return 0;
}