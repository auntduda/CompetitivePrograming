#include <iostream>

using namespace std;

int main(){
    int c[5], ord[5] = {};
    for(int i = 0; i < 5; i++){
        cin >> c[i];
        if(i > 0){
            if(c[i] > c[i-1]) ord[i]++;
            else if(c[i] < c[i-1]) ord[i]--;
        }
    }
    
    
    bool ok = true;
    for(int i = 2; i < 5; i++)
        if(ord[i] != ord[i-1]) ok = false;
    
    if(ok){
        if(ord[1] == 1) cout << 'C' << endl;
        else cout << 'D' << endl;
    } else cout << 'N' << endl;
    
    return 0;
}