#include <iostream>

using namespace std;

int main(){
    long long int m, n, fm, fn;
    while(cin >> m){
        cin >> n;
        fm=1;
        fn=1;
        for(int i=m;i>0;i--){
            fm*=i;
        }
        for(int i=n;i>0;i--){
            fn*=i;
        }
        cout << fm+fn << endl;
    }
}