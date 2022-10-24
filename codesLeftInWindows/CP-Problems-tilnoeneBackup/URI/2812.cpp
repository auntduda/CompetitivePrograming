#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        int v[k], valor, imp=0;
        for(int j=0;j<k;j++){
            cin >> valor;
            if(valor%2!=0){
                v[imp] = valor;
                imp++;
            }
        }
        if(imp!=0){
            sort(v, v+imp, greater<int>());
            int vi=0, vf=imp-1;
            for(int j=0;j<imp;j++){
                if(j%2==0){
                    cout << v[vi];
                    vi++;
                } else{
                    cout << v[vf];
                    vf--;
                }
                if(j==imp-1) cout << endl;
                else cout << " ";
            }
        } else{
            cout << endl;
        }
    }

    return 0;
}