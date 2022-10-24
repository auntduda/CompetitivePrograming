#include <iostream>

using namespace std;

int main() {
    int n, r, v;
    cin >> n >> r;
    int jog[510] = {};
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < n; j++){
            cin >> v;
            jog[j] += v;
        }
    }
    
    int maior = 0, pos = 0;
    for(int i = 0; i < n; i++){
        if(jog[i] >= maior){
            maior = jog[i];
            pos = i;
        }
    }
    
    cout << pos+1 << endl;
    
    return 0;
}