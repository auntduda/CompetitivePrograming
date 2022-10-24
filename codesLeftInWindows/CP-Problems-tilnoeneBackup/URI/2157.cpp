#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        string res = "";
        for(int j = a; j <= b; j++) res += to_string(j);
        
        cout << res;
        for(int j = res.size()-1; j >= 0; j--) cout << res[j];
        cout << endl;
    }
    
    return 0;
}