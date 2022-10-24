#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        
        int m[16], l[16], mark = 0, leti = 0;
        
        for(int i = 0; i < n; i++){
            cin >> m[i];
            mark += m[i];
        }
        
        for(int i = 0; i < n; i++){
            cin >> l[i];
            leti += l[i];
        }
        
        // consecutivos
        bool consL = false;
        for(int i = 0; i < n-2; i++){
            if(consL) break;
            
            if(m[i] == m[i+1] && m[i] == m[i+2]){
                mark += 30;
                consL = true;
            }
            if(l[i] == l[i+1] && l[i] == l[i+2]){
                leti += 30;
                consL = true;
            }
        }
                
        if(mark == leti) cout << 'T' << endl;
        else if(mark > leti) cout << 'M' << endl;
        else cout << 'L' << endl;
        
    }
    
    return 0;
}