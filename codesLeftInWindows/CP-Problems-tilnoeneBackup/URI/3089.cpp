#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        int v[n*2];
        for(int i=0;i<n*2;i++){
            cin >> v[i];
        }
        sort(v, v+n*2);
        int p1 = v[0]+v[2*n-1], p2 = v[n]+v[n-1];
        if(p1>p2){
            cout << p1 << " " << p2 << endl;
        } else{
            cout << p2 << " " << p1 << endl;
        }
    }

    return 0;
}