#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int l=1;
    for(int i=0;i<n;i++){
        cout << l << " " << l+1 << " " << l+2 << " PUM" << endl;
        l+=4;
    }

    return 0;
}