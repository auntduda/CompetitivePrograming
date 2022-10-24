#include <iostream>

using namespace std;

int main(){
    int n, k, v;
    
    cin >> n;
    while(n--){
        cin >> k;
        
        for(int i = 0; i < k; i++){
            cin >> v;
            if(v == 1) cout << "Rolien" << endl;
            else if(v == 2) cout << "Naej" << endl;
            else if(v == 3) cout << "Elehcim" << endl;
            else cout << "Odranoel" << endl;
        }
    }
    
    return 0;
}