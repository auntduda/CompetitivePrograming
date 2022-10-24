#include <iostream>

using namespace std;

int main(){
    int n, maior, v;
    cin >> n >> maior;
    bool win = true;
    for(int i=1;i<n;i++){
        cin >> v;
        if(v>maior) win = false;
    }
    if(win) cout << "S" << endl;
    else cout << "N" << endl;
    
    return 0;
}