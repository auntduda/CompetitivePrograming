#include <stdio.h>

int main(){
    int i;
    for(i=1;i<=9;i+=2){
        cout << "I=" << i << " J=" << i+6 << endl;
        cout << "I=" << i << " J=" << i+5 << endl;
        cout << "I=" << i << " J=" << i+4 << endl;
    }

    return 0;
}