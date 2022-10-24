#include <iostream>

using namespace std;

int main(){
    int n;
    
    while(cin >> n){
        int sat = 0, ins = 0, op;
        
        for(int i = 0; i < n; i++){
            cin >> op;
            if(op == 1) ins++;
            else sat++;
        }
        
        if(sat > ins) cout << "Y" << endl;
        else cout << "N" << endl;
    }
    
    return 0;
}