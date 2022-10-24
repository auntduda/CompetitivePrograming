#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int tst[100001];
    int k=1;
    int i=0;
    while(k!=0){
        cin >> k;
        tst[i] = k;
        i++;
    }

    i=0;
    while(tst[i]!=0){
        tst[i] = pow(2,tst[i])-1;
        i++;
    }

    i=0;
    while(tst[i]!=0){
        cout << "Teste " << i+1 << endl << tst[i] << endl << endl;
        i++;
    }

    return 0;
}
