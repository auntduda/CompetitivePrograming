#include <iostream>

using namespace std;

int main(){
    int x;
    int inicio;
    cin >> x;

    if(x%2==0){
        inicio=x+1;
    } else {
        inicio=x;
    }

    for(int i=0;i<12;i+=2){
        cout << inicio+i << endl;
    }

    return 0;
}
