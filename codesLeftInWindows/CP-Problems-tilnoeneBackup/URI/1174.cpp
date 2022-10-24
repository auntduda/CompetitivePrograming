#include <iostream>

using namespace std;

int main(){
    double a[100];
    for(int i=0;i<100;i++){
        cin >> a[i];  
    }

    for(int i=0;i<100;i++){  
        cout.precision(1);
        cout.setf(ios::fixed);
        if(a[i]<=10){
            cout << "A[" << i << "] = " << a[i] << endl;
        }
    }
    

    return 0;
}