#include <iostream>

using namespace std;

int main(){
    int n, v;
    
    while(true){
        cin >> n;
        if(n == 0) break;
        int maria = 0, joao = 0;
        
        for(int i = 0; i < n; i++){
            cin >> v;
            if(v == 0) maria++;
            else joao++;
        }
        
        cout << "Mary won " << maria << " times and John won " << joao << " times" << endl;
    }
    
    return 0;
}