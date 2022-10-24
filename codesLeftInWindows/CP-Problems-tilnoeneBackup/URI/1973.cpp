#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int v[n], i, soma=0, maxdir=0;
    for(i=0;i<n;i++){
        cin >> v[i];
        soma+=v[i];
    }
    
    i=0;

    while(true){
        long long int c = i;
        if(v[i]%2==0) i--;
        else i++;
        if(v[c]>0){
            v[c]--;
            soma--;
        }
        if(i<0 or i>=n) break;
        if(i>maxdir) maxdir=i;
    }
    cout << maxdir+1 << " " << soma << endl;
    
    
    return 0;
}