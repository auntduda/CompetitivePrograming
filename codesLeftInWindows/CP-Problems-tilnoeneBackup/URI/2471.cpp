#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int v[55][55], sl[55] = {}, sc[55] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
            
            sl[i] += v[i][j];
            sc[j] += v[i][j];
        }
    }
    
    int menor = sl[0], maior = sl[0];
    
    for(int i = 1; i < n; i++){
        if(sl[i] > maior){
            maior = sl[i];
        } 
        if(sl[i] < menor){
            menor = sl[i];
        }
    }
    
    int men = 0, mai = 0;
    for(int i = 0; i < n; i++){
        if(sl[i] == menor) men++;
        else mai++;
    }
    
    int proc;
    if(men > mai) proc = maior;
    else proc = menor;
    
    int a, b, ao;
    for(int i = 0; i < n; i++){
        if(sl[i] == proc){
            a = i;
        } else{
            ao = i;
        }
    }
    for(int i = 0; i < n; i++){
        if(sc[i] == proc){
            b = i;
            break;
        }
    }
    
    int res = v[a][b];
    cout << (sl[ao] - sl[a]) + v[a][b] << " " << res << endl;
    
    return 0;
}