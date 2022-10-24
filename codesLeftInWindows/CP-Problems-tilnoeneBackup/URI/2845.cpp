#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n], maior;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(i==0) maior=v[i];
        else if(v[i]>maior) maior=v[i];
    }
    int res = maior+1;
    while(__gcd(res, maior)!=1) res++;
    cout << res << endl;
    
    return 0;
}