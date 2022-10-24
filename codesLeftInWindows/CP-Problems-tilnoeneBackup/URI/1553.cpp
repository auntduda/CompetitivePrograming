#include <iostream>

using namespace std;

int main(){
    int n, k, p;
    while(true){
        cin >> n >> k;
        if(n == 0 && k == 0) break;
        
        int perg[110] = {}, freq = 0;
        for(int i = 0; i < n; i++){
            cin >> p;
            perg[p]++;
        }
        
        for(int i = 1; i <= 100; i++){
            if(perg[i] >= k) freq++;
        }
        
        cout << freq << endl;
    }
    
    return 0;
}