#include <iostream>

using namespace std;

int main(){
    int n;
    
    cin >> n;
    while(n--){
        int qt, s;
        cin >> qt >> s;
        
        int v, mp = 110, pos = -1;
        for(int i = 0; i < qt; i++){
            cin >> v;
            if(abs(s-v) < mp){
                mp = abs(s-v);
                pos = i+1;
            }
        }
        
        cout << pos << endl;
        
    }
    
    return 0;
}