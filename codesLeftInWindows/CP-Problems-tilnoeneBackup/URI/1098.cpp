#include <iostream>

using namespace std;

int main(){
    double i, j;
    for(i=0;i<2;i+=0.2){
        cout << "I=" << i << " J=" << 1+i << endl;
        cout << "I=" << i << " J=" << 2+i << endl;
        cout << "I=" << i << " J=" << 3+i << endl;
    }

    return 0;
}