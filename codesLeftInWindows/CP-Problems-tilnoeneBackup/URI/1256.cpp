#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, c;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m >> c;
        int v;
        vector<int> val[128];
        for(int j=0;j<c;j++){
            cin >> v;
            val[v%m].push_back(v);
        }
        for(int j=0;j<m;j++){
            cout << j;
            for(int k=0;k<val[j].size();k++){
                cout << " -> " << val[j][k];
            }
            cout << " -> \\" << endl;
        }
        if(i!=n-1) cout << endl;
    }
    
    return 0;
}