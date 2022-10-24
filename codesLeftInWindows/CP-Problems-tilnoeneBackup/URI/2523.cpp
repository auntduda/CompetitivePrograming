#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    char l;
    while(cin >> l){
        map<int, char> alf;
        alf[1] = l;
        for(int i=2;i<=26;i++) cin >> alf[i];
        cin >> n;
        int v;
        for(int i=0;i<n;i++){
            cin >> v;
            cout << alf[v];
        }
        cout << endl;
        
    }
    
    return 0;
}