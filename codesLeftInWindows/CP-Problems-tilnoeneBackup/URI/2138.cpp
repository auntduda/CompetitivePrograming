#include <iostream>

using namespace std;

int main(){
    string n;
    while(cin >> n){
        int v[10] = {};
        for(int i = 0; i < n.size(); i++){
            v[int(n[i])-48]++;
        }
        
        int pmaior = 0, maior = 0;
        for(int i = 0; i < 10; i++){
            if(v[i] >= maior){
                maior = v[i];
                pmaior = i;
            }
        }
        
        cout << pmaior << endl;   
    }
    
    return 0;
}