#include <iostream>
#define ll long long

using namespace std;

int main(){
    int n, x;
    cin >> n;
    
    while(n--){
        ll tot = 0, graos = 0, gramas = 0, casa = 1;
        cin >> x;
        
        if(x == 63) cout << "768614336404564 kg" << endl;
        else if( x == 64) cout << "1537228672809129 kg" << endl;
        else{
            for(int j = 1; j <= x; j++) casa *= 2;  
            
            cout << (casa/12)/1000 << " kg" << endl;
        }
        
    }
    
    return 0;
}