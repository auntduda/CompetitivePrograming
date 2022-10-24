#include <iostream>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0) break;
        
        int h[1000010] = {}, it = 0, maior = n;
        h[0] = n;
        
        while(n > 1){
            if(n % 2 == 0) n = (h[it-1])/2;
            else n = 3*h[it-1]+1;
            
            if(n > maior) maior = n;
            
            h[it] = n;
            it++;
        }
        
        cout << maior << endl;
    }
    
    return 0;
}