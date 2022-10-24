#include <iostream>

using namespace std;

bool resultado(int a, int b){
    return (a+b) % 2;
}

int main(){
    int n, k = 1, a, b;
    
    while(true){
        cin >> n;
        if(n == 0) break;

        cout << "Teste " << k << endl;
        
        string j[2];
        cin >> j[0] >> j[1];
        
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            cout << j[resultado(a, b)] << endl;
        }
        
        cout << endl;
        k++;
    }
    
    return 0;
}