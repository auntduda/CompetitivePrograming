#include <iostream>

using namespace std;

int main(){
    int nc, n, k, mortos;
    cin >> nc;
    for(int i = 1; i <= nc; i++){
        cin >> n >> k;
        int it = k, c = k, p[10010] = {};
        mortos = 0;
        
        if(it > n) it %= n;
        
        
        while(mortos != n-1){
            if(p[it] == 0){
                if(c == k){
                    p[it] = 1;
                    mortos++;
                    c = 0;
                }
                
                c++;
            }
            
            it++;
            if(it > n) it = 1;
        }
        
        cout << "Case " << i << ": ";
        for(int j = 1; j <= n; j++){
            if(p[j] == 0){
                cout << j << endl;
                break;
            }
        }
        
    }
    
    
    return 0;
}