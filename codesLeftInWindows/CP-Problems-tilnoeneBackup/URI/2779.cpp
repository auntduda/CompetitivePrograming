#include <iostream>

using namespace std;

int main() {
    int n, m, f, total=0;
    cin >> n >> m;
    int album[128]= {};
    for(int i=0;i<m;i++){
        cin >> f;
        album[f-1]++;
    }
    for(int i=0;i<n;i++){
        if(album[i]>0) total++;
    }
    cout << n-total << endl;
    
    return 0;
}