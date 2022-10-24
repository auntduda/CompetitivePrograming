#include <iostream>

using namespace std;

int main(){
    int n, m, v, jog[110] = {}, tot = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        bool gol = true;
        for(int j = 0; j < m; j++){
            cin >> v;
            if(v == 0) gol = false; 
        }
        
        if(gol) tot++;
    }
    
    cout << tot << endl;

    return 0;
}