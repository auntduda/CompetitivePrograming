#include <iostream>

using namespace std;

int main(){
    int q, d, p;
    while(cin >> q){
        if(q == 0) break;
        cin >> d >> p;
        
        int pg = (q*d*p)/(p-q);
        cout << pg;
        
        if(pg == 1) cout << " pagina" << endl;
        else cout << " paginas" << endl; 
        
    }
    
    return 0;
}