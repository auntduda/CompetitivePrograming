#include <iostream>

using namespace std;

int main() {
    int n, v;
    while(cin >> n){
        if(n==0) break;
        while(n--){
            int pretos = 0, brancos = 0, res;
            
            for(int i=0;i<5;i++){
                cin >> v;
                if(v<=127){
                    pretos++;
                    res = i;
                } else brancos++;
            }
            
            if(pretos==1) cout << char(res+65) << endl;
            else cout << '*' << endl;
        }
    }
    
    return 0;
}