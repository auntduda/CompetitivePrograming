#include <iostream>

using namespace std;

int main(){
    int n, esc=0;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++) cin >> v[i];
    if(n<=2) esc=0;
    else{
        int sub[n-1];
        for(int i=0;i<n-1;i++){
            sub[i]=v[i+1]-v[i];
            //cout << sub[i] << " ";
        }
        bool seq = true;
        int ant = sub[0];
        for(int i=1;i<n-1;i++){
            if(sub[i]==ant) seq = true;
            else{
                if(seq=true) esc++;
                seq = false;
            }
            ant = sub[i];
        }
    }
    cout << esc+1 << endl;
    
    return 0;
}