#include <iostream>

using namespace std;

int main(){
    int x, y, i, temp;
    cin >> x >> y;
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    if(x%2==0){
        x++;
    } else{
        x+=2;
    }
    int soma=0;
    for(i=x;i<y;i+=2){
        soma+=i;
    }
    cout << soma << endl;
    return 0;
}