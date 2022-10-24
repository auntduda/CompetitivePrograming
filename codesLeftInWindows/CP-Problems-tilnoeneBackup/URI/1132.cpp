#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    if(x>y){
        int temp=x;
        x=y;
        y=temp;
    }
    int soma=0;
    for(x;x<=y;x++){
        if(x%13!=0){
            soma+=x;
        }
    }
    cout << soma << endl;

    return 0;
}