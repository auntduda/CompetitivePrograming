#include <iostream>
#include <algorithm>

using namespace std;
    
int main(){
    int n, good = 0, bad = 0;
    cin >> n;
    string names[110];
    char comp;
    
    for(int i = 0; i < n; i++){
        cin >> comp >> names[i];
        if(comp == '+') good++;
        else bad++;
    }
    
    sort(names, names+n);
    
    for(int i = 0; i < n; i++) cout << names[i] << endl;
    
    cout << "Se comportaram: " << good << " | Nao se comportaram: " << bad << endl;
    
    return 0;
}