#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int v, k = 1;
    while(cin >> v){
        if(v == 0) break;
        
        cout << "Teste " << k << endl;
        int notas[4] = {};
        
        while(v >= 50){
            v -= 50;
            notas[0]++;
        }
        
        while(v >= 10){
            v -= 10;
            notas[1]++;
        }
        
        while(v >= 5){
            v -= 5;
            notas[2]++;
        }
        
        while(v >= 1){
            v -= 1;
            notas[3]++;
        }
        
        for(int i = 0; i < 3; i++)
            cout << notas[i] << " ";
        cout << notas[3] << endl;
        cout << endl;
        
        k++;
    }
    
    return 0;
}