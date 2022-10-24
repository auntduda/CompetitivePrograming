#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, q, k=1;
    while(true){
        cin >> n >> q;
        if(n==0 && q==0) break;
        int v[n], num, pos;
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v, v+n);
        cout << "CASE# " << k << ":" << endl;
        for(int i=0;i<q;i++){
            pos = -1;
            cin >> num;
            for(int j=0;j<n;j++){
                if(num==v[j]){
                    pos=j+1;
                    break;
                }
            }
            if(pos==-1) cout << num << " not found" << endl;
            else cout << num << " found at " << pos << endl;
        }
        k++;
    }
    
    return 0;
}