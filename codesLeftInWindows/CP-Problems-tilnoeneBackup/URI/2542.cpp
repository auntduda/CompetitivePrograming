#include <iostream>

using namespace std;

int main() {
    int n, m, l;
    while(cin >> n){
        cin >> m >> l;
        long long marcos[m][n], leo[l][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) cin >> marcos[i][j];
        }
        for(int i=0;i<l;i++){
            for(int j=0;j<n;j++) cin >> leo[i][j];
        }
        int cm, cl, a;
        cin >> cm >> cl >> a;
        if(marcos[cm-1][a-1]>leo[cl-1][a-1]) cout << "Marcos" << endl;
        else if(marcos[cm-1][a-1]<leo[cl-1][a-1]) cout << "Leonardo" << endl;
        else cout << "Empate" << endl;
    }
    
    return 0;
}