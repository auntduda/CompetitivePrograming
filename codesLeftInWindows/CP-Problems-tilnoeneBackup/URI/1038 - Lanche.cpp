#include <iostream>

using namespace std;

int main(){
    int c, q;
    cin >> c >> q;

    cout.precision(2);
    cout.setf(ios::fixed);

    if(c==1){
        cout << "Total: R$ " << q*4.00;
    } else if (c==2){
        cout << "Total: R$ " << q*4.50;
    } else if (c==3){
        cout << "Total: R$ " << q*5.00;
    } else if (c==4){
        cout << "Total: R$ " << q*2.00;
    } else if (c==5){
        cout << "Total: R$ " << q*1.50;
    }
    cout << endl;

    return 0;
}
