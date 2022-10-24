#include <iostream>

using namespace std;

int main(){
    int n, m;
    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        
        int p[110][110], comp[110] = {}, prob[110] = {}, car = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> p[i][j];
                
                if(p[i][j] == 1){
                    comp[i]++;
                    prob[j]++;
                }
                
            }
        }
        
        bool rt = false, tst4 = true;
        
        for(int i = 0; i < n; i++){
            if(comp[i] == m) rt = true;
            if(comp[i] == 0) tst4 = false;
        }
        
        bool todos = false, tst3 = true;
        for(int i = 0; i < m; i++){
            if(prob[i] == n) todos = true;
            if(prob[i] == 0) tst3 = false;
        }
        
        if(!rt) car++;
        if(tst4) car++;
        if(!todos) car++;
        if(tst3) car++;
        
        cout << car << endl;
        
        /*
        for(int i = 0; i < n; i++) cout << comp[i] << " ";
        cout << endl;
        for(int i = 0; i < m; i++) cout << prob[i] << " " ;
        cout << endl;
        */
    }
    
    return 0;
}