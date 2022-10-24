#include <iostream>

using namespace std;

int main(){
    int n, v, k = 1;
    
    while(true){
        cin >> n;
        if(n == 0) break;
        
        cout << "Teste " << k << endl;
        
        for(int i = 1; i <= n; i++){
            cin >> v;
            if(v == i) cout << v << endl;
        }
		cout << endl;
        
        k++;
    }
    
    return 0;
}