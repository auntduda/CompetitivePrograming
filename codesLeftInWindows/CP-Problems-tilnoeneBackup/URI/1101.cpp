#include <iostream>

using namespace std;

int main(){
    int m, n, soma, i, temp;
    while(true){
        cin >> n >> m;
        if(m<=0 or n<=0){
            return 0;
        }
        if(m>n){
            temp=n;
            n=m;
            m=temp;
        }
        soma=0;
        for(i=m;i<=n;i++){
            soma+=i;
            cout << i << " ";
        }
        cout << "Sum=" << soma << endl;
    }

    return 0;
}