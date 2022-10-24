#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, v;
    cin >> n;
    map<int, bool> peca;
    for(int i = 1; i < n; i++){
        cin >> v;
        peca[v] = true;
    }
    
    for(int i = 1; i <= n; i++){
        if(!peca[i]){
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}