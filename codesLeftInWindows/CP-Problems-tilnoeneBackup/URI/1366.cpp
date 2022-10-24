#include <iostream>

using namespace std;

int main(){
    int n, c, v;
    while(true){
        cin >> n;
        if(n == 0) break;

        int lados = 0;
        for(int i = 0; i < n; i++){
            cin >> c >> v;
            
            if(v > 1){
                if(v % 2 != 0) v--;
                lados += v;
            }
            
        }
        
        cout << lados/4 << endl;
    }
    
    return 0;
}