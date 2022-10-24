#include <iostream>

using namespace std;

int main(){
    int n, mapa[510][510], a, b;
    cin >> n;
    
    for(int i = 0; i < 510; i++){
        for(int j = 0; j < 510; j++){
            mapa[i][j] = 0;
        }
    }
    
    int tot = 0;
    while(n--){
        cin >> a >> b;
        if(mapa[a][b] == 1)
            tot += 1;
        
        mapa[a][b]++;
    }
    
    if(tot > 0) cout << 1 << endl;
    else cout << 0 << endl;
    
    return 0;
}