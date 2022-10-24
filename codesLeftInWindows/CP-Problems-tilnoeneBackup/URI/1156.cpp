#include <iostream>

using namespace std;

int main(){
    double a, b=2, c, soma=1;
    for(a=3;a<=39;a+=2){
        c=a/b;
        soma+=c;
        b*=2;
    }
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << soma << endl;

    return 0;
}