#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    while(cin >> n){
        int v, favor=0, contra=0;
        for(int i=0;i<n;i++){
            cin >> v;
            if(v==1){
                favor++;
            } else{
                contra++;
            }
        }
        if(favor>=(2*n)/3.0){
            cout << "impeachment" << endl;
        } else{
            cout << "acusacao arquivada" << endl;
        }
    }
    
    return 0;
}