#include <iostream>
#include <map>

using namespace std;

int main(){
    int a, b;
    while(true){
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        
        int v, difa = 0, difb = 0, cda[10010];
        
        map<int, bool> ca, cb;
        for(int i = 0; i < a; i++){
            cin >> v;
            cda[i] = v;
            ca[v] = true;
        }
        
        for(int i = 0; i < b; i++){
            cin >> v;
            cb[v] = true;
            
            if(!ca[v]){
                difa++;
                ca[v] = true;
            }
        }
        
        for(int i = 0; i < a; i++){
            if(!cb[cda[i]]){
                difb++;
                cb[cda[i]] = true;
            }
        }
        
        cout << min(difa, difb) << endl;
        
    }
    
    return 0;
}