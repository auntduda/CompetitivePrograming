#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        long long v;
        cin >> v;
        bool primo = true;
        if(v==2) primo = true;
        else if(v%2==0) primo = false;
        else{
            for(long long j=3;j<=sqrt(v);j+=2){
                if(v%j==0){
                    primo = false;
                    break;
                }
            }
        }
        if(primo) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }

    return 0;
}