#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, bool> freq;
    int n, v, tot = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v;
        if(!freq[v]){
            tot ++;
        }
        
        freq[v] = true;
    }
    
    cout << tot << endl;
    
    return 0;
}