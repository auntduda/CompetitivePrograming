#include <iostream>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0) break;
        
        int j1 = 0, j2 = 0, a, b;
        
        for(int i = 0; i < n; i++){
            cin >> a >> b;    
            if(a > b) j1++;
            else if(a < b) j2++;
        }
        
        cout << j1 << " " << j2 << endl;
    }
    
    return 0;
}