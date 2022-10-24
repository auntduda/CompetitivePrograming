#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sub[n], res=1;
    for(int i=0;i<n;i++) cin >> sub[i];
    
    if(sub[0]>sub[1]){
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                if(sub[i]<=sub[i+1]) res=0;
            } else{
                if(sub[i]>=sub[i+1]) res=0;
            }
        }
    } else if(sub[0]<sub[1]){
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                if(sub[i]>=sub[i+1]) res=0;
            }else{
                if(sub[i]<=sub[i+1]) res=0;
            }
        }
    } else res=0;
    
    cout << res << endl;
    
    return 0;
}