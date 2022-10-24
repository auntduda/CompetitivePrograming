#include <iostream>

using namespace std;

int main() {
    int n, id;
    while(cin >> n){
        cin >> id;
        int gmp=0;
        for(int i=0;i<n;i++){
            int a, b;
            cin >> a >> b;
            if(a==id && b==0) gmp++;
        }
        cout << gmp << endl;
    }
    
    return 0;
}