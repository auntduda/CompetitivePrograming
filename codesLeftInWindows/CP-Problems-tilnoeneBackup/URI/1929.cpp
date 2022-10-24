#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, ta, v=-1;
    cin >> a >> b >> c >> d;
    for(int i=0;i<4;i++){
        if(i==1){
            ta=a;
            a=d;
        } else if(i==2){
            a=ta;
            ta=b;
            b=d;
        } else if(i==3){
            b=ta;
            c=d;
        }
        if(abs(b-c)<a and a<(b+c) and abs(a-c)<b and b<(a+c) and abs(a-b)<c and c<(a+b)){
            v=0;
            break;
        }
    }
    if(v==-1){
        cout << "N" << endl;
    } else{
        cout << "S" << endl;
    }
    return 0;
}