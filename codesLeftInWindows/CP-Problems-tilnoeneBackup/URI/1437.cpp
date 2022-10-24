#include <iostream>

using namespace std;

int main(){
    int n;
    
    while(true){
        cin >> n;
        if(n == 0) break;
        
        int mov = 1;
        char dir;
        for(int i = 0; i < n; i++){
            cin >> dir;
            if(dir == 'D') mov++;
            else mov--;
        }
        
        mov %= 4;
        if(mov < 0) mov += 4;
        
        if(mov == 1) cout << 'N' << endl;
        else if(mov == 2) cout << 'L' << endl;
        else if(mov == 3) cout << 'S' << endl;
        else cout << 'O' << endl;
        
    }
    
    return 0;
}