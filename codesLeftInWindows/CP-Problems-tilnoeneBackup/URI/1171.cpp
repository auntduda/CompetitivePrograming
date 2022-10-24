#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v, v+n);
    int vezes = 1;
    for(int i=1;i<n;i++){
        if(i<n-1){
            if(v[i]==v[i-1]){
                vezes++;
            } else{
                cout << v[i-1] << " aparece " << vezes << " vez(es)" << endl;
                vezes=1;
            }
        } else{
            if(v[i]==v[i-1]){
                vezes++;
                cout << v[i-1] << " aparece " << vezes << " vez(es)" << endl;
            } else{
                cout << v[i-1] << " aparece " << vezes << " vez(es)" << endl;
                cout << v[i] << " aparece " << 1 << " vez(es)" << endl;
            }
        }
    }
    
    return 0;
}