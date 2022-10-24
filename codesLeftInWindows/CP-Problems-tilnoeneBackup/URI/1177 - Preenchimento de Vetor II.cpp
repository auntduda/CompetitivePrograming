#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n[1000];

    for(int i=0;i<1000;i++){
        for(int j=0;j<t;j++){
            cout << "N[" << i << "] = " << j << endl;
            i++;
            if(i==1000){
                return 0;
            }
        }
        i--;
    }

    return 0;
}