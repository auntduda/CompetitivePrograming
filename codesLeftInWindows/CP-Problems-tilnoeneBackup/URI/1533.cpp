#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, v[1010], ori[1010];
    
    while(true){
        cin >> n;
        if(n == 0) break;
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
            ori[i] = v[i];
        }
        sort(v, v+n, greater<int>());
        
        for(int i = 0; i < n; i++){
            if(ori[i] == v[1]){
                cout << i+1 << endl;
                break;
            }
        }
    }
    
    return 0;
}