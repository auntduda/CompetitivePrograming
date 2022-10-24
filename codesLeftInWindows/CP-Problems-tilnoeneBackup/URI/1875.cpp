#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c;
    cin >> c;
    while(c--){
        int n, r = 0, g = 0, b = 0;
        cin >> n;
        
        char ac, bc;
        for(int i = 0; i < n; i++){
            
            cin >> ac >> bc;
            
            if(ac == 'R'){
                if(bc == 'G') r++;
                r++;
            }
            else if(ac == 'G'){
                if(bc == 'B') g++;
                g++;
            } else{
                if(bc == 'R') b++;
                b++;
            }
            
        }
        
        if(r == g && r == b) cout << "trempate" << endl;
        else if(r > g and r > b) cout << "red" << endl;
        else if(g > r and g > b) cout << "green" << endl;
        else if(b > r and b > g) cout << "blue" << endl;
        else cout << "empate" << endl;
        
    }
    
    return 0;
}