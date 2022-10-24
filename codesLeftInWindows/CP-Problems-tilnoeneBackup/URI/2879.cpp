#include <iostream>

using namespace std;

int main() {
    int n, v, win=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v;
        if(v!=1) win++;
    }
    cout << win << endl;

    return 0;
}