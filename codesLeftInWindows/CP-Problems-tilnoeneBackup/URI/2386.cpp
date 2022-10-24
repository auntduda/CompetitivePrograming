#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll a, n, f, tot = 0;
    cin >> a >> n;
    
    while(n--){
        cin >> f;
        if(f*a >= 40000000) tot++;
    }
    
    cout << tot << endl;
    
    return 0;
}