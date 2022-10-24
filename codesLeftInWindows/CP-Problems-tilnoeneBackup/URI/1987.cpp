#include <iostream>

using namespace std;

int main(){
    int n;
    
    while(cin >> n){
        
        char d;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> d;
            sum += int(d)-48;
        }
        
        cout << sum << " ";
        if(sum % 3 == 0) cout << "sim" << endl;
        else cout << "nao" << endl;
        
    }
    
    return 0;
}