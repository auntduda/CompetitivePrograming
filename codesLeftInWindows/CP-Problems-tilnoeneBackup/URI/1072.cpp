#include <iostream>

using namespace std;

int main(){
    int n, v, vin=0, vout=0;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> v;
        if(v>=10 and v<=20){
            vin++;
        } else{
            vout++;
        }
    }
    cout << vin << " in" << endl << vout << " out" << endl;

    return 0;
}