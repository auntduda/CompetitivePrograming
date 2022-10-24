#include <iostream>

using namespace std;

int main(){
    int n;
    char l;
    
    while(cin >> n){
        int dir[64] = {}, esq[64] = {}, tam;
        
        for(int i = 0; i < n; i++){
            cin >> tam >> l;
            if(l == 'D') dir[tam]++;
            else esq[tam]++;
        }
        
        int pares = 0;
        for(int i = 30; i <= 60; i++) pares += min(dir[i], esq[i]);
        cout << pares << endl;
    }
    
    return 0;
}