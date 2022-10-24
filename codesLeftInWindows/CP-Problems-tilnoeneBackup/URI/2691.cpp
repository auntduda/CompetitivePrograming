#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    while(n--){
        string e, n1 = "", n2 = "";
        cin >> e;
        
        int it = 0;
        while(e[it] != 'x'){
            n1 += e[it];
            it++;
        }
        
        it++;
        
        while(it != e.size()){
            n2 += e[it];
            it++;
        }
        
        long long a = stoll(n1), b = stoll(n2);
        
        for(int i = 5; i <= 10; i++){
            cout << a << " x " << i << " = " << a*i;
            if(a != b){
                cout << " && " << b << " x " << i << " = " << b*i;
            }
            
            cout << endl;
        }
        
    }
    
    return 0;
}