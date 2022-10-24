#include <iostream>

using namespace std;

int main(){
    int n;
    double x, y;
    cin >> n;
    cout.precision(1);
    cout.setf(ios::fixed);
    for(int i=0;i<n;i++){
        cin >> x >> y;
        if(y==0){
            cout << "divisao impossivel" << endl;
        } else{
            cout << x/y << endl;
        }
    }

    return 0;
}