#include <iostream>

using namespace std;

int main(){
    int n;
    
    cin >> n;
    while(n--){
        
        int t, h[64], d = 0;
        cin >> t;
        for(int i = 0; i < t; i++) cin >> h[i];
        
        char jump;
        for(int i = 0; i < t; i++){
            cin >> jump;
            if(jump == 'J' && h[i] > 2) d++;
            else if(jump == 'S' && h[i] <= 2) d++;
        }
        
        cout << d << endl;
        
    }
    
    return 0;
}