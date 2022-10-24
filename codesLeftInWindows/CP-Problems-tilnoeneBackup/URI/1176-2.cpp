#include <iostream>

using namespace std;

int main(){
    int n, t, j, a1, a2, soma;
    cin >> t;
    for(j=0;j<t;j++){
        cin >> n;
        for(int i=0;i<n+1;i++){
            if(i==0){
                a1=0;
                soma=0;
            } else if(i==1){
                a2=1;
                soma=1;
            } else{
                soma=a2+a1;
                a1=a2;
                a2=soma;
            }
        }
        cout << "Fib(" << n << ") = " << soma << endl;
    }
}