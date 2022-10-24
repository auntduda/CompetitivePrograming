#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int fim = n;
    if(n%2!=0){
        fim=n-1;
    }

    for(int i=2;i<=fim;i+=2){
        cout << i << "^2 = " << i*i << endl;
    }

    return 0;
}
