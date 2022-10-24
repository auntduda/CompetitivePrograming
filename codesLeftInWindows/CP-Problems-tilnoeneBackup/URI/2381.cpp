#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    string nomes[110];
    for(int i = 0; i < n; i++) cin >> nomes[i];
    
    sort(nomes, nomes+n);
    
    cout << nomes[k-1] << endl;
    
    return 0;
}