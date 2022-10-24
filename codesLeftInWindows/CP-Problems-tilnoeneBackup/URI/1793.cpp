#include <iostream>

using namespace std;

int main(){
    int n, v;
    while(cin >> n){
        if(n == 0) break;
        
        int tot = 0, fim = 0, vant = 0;
        for(int i = 0; i < n; i++){
            cin >> v;
            
            if(fim >= v) tot += v - vant;
            else tot += 10;
            
            fim = v + 9;
            vant = v;
            
        }
        
        cout << tot << endl;
        
    }
    
    return 0;
}