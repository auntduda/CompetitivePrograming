#include <iostream>
#define ll long long

using namespace std;

ll elevar(ll n, ll p){
    ll res = 1;
    for(int i = 0; i < p; i++) res *= n;
    return res;
}

int main(){
    ll n;
    cin >> n;
    
    cout << elevar(3, n) << endl;
    
    return 0;
}