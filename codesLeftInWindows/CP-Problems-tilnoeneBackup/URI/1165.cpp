#include <iostream>

using namespace std;

int main(){
    int n, v, i, j;
    cin >> n;
    for(j=0;j<n;j++){
        cin >> v;
        int div=0;
        if(v==2){
            cout << v << " eh primo" << endl;
        } else if(v==1){
            cout << v << " nao eh primo" << endl;
        } else if(v%2==0){
            cout << v << " nao eh primo" << endl;
        } else{
            for(i=3;i<v;i+=2){
                if(v%i==0){
                    div=1;
                    break;
                }
            }
            if(div==0){
                cout << v << " eh primo" << endl;
            } else{
                cout << v << " nao eh primo" << endl;
            }
        }
    }

    return 0;
}