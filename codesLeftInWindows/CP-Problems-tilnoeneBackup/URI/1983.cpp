#include <iostream>

using namespace std;

int main(){
    double n, maior[2], v, k;
    cin >> n >> maior[0] >> maior[1];
    for(int i=1;i<n;i++){
        cin >> v >> k;
        if(k>maior[1]){
            maior[0]=v;
            maior[1]=k;
        }
    }
    if(maior[1]>=8){
        cout << maior[0] << endl;
    } else{
        cout << "Minimum note not reached" << endl;
    }
    
    return 0;
}