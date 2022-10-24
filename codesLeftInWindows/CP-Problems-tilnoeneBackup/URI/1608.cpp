#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int d, n ,b;
        cin >> d >> n >> b;
        
        int prod[110], preco;
        for(int i = 0; i < n; i++){
            cin >> preco;
            prod[i] = preco;
        }
        
        int menor = 1000000010;
        for(int i = 0; i < b; i++){
            int qi, ind, qnt, total = 0;
            cin >> qi;

            for(int j = 0; j < qi; j++){
                cin >> ind >> qnt;
                total += qnt * prod[ind];
            }
            
            if(total < menor)
                menor = total;
        }
        
        cout << d/menor << endl;
    }
    
    return 0;
}