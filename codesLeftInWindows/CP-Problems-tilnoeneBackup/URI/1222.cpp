#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double n, l, c;
    while(cin >> n){
        cin >> l >> c;
        
        int pg = 0, lin = 1, totc = 0;
        string pal;
        
        for(int i = 0; i < n; i++){
            cin >> pal;
            
            if(i == 0) totc += pal.size();
            else{
                
                if(totc + pal.size() + 1 <= c) totc += pal.size() + 1;
                else{
                    totc = pal.size();
                    lin++;
                }
                
            }
        }
        
        while(lin >= l){
            pg++;
            lin -= l;
        }

        if(lin > 0) pg++;
        
        cout << pg << endl;
        
    }
    
    return 0;
}