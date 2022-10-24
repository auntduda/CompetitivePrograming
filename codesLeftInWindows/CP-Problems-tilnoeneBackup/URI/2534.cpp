#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    while(cin >> n){
        cin >> q;
        int v, cid[n];
        for(int i=0;i<n;i++) cin >> cid[i];
        sort(cid, cid+n, greater<int>());
        for(int i=0;i<q;i++){
            cin >> v;
            cout << cid[v-1] << endl;
        }
    }
    
    return 0;
}