#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    while(n--){
        string a, b;
        cin >> a >> b;
        
        int tot = 0;
        for(int i = 0; i < a.size(); i++){
            
            if(a[i] <= b[i]){
                tot += b[i] - a[i];
            } else {
                tot += (26 + b[i]) - a[i];
            }
            
        }

        cout << tot << endl;

    }
    
    return 0;
}