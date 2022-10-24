#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int pontos[n];
    for(int i=0;i<n;i++){
        cin >> pontos[i];
    }
    sort(pontos, pontos+n, greater<int>());
    int cl = k;
    
    while(k<n){
        if(pontos[k]!=pontos[k-1]){
            break;
        }
        cl++;
        k++;
    }
    
    cout << cl << endl;
    
    return 0;
}