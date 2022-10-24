#include <iostream>

using namespace std;

string seq = "";

int fib(int n){
    if(n==1){
        seq+=to_string(n)+" ";
        return 0;
    } else if(n==2){
        seq+=to_string(n)+" ";
        return 1;
    } else{
        seq+=to_string(n)+" ";
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int n, a1, a2, soma;
    cin >> n;

    for(int i=1;i<=n;i++){
        if(i==1){
            a1=0;
            soma = 0;
        } else if(i==2){
            a2=1;
            soma = 1;
        } else{
            soma=a1+a2;
            a1=a2;
            a2=soma;
        }
        cout << soma;
        if(i==n){
            cout << endl;
        } else{
            cout << " ";
        }
    }

    return 0;
}