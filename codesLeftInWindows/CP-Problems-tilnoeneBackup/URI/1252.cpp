#include <iostream>
#include <algorithm>

using namespace std;

int m;

bool func(int a, int b){
    int aMod = a%m, bMod = b%m;
    if(aMod==bMod){
        if(a%2==0 && b%2!=0) return false;
        else if(a%2!=0 && b%2==0) return true;
        else if(a%2==0 && b%2==0) return a<b;
        else return a>b;
    }
    if(a<0 && b<0){
        return aMod<bMod;
    } else if(b<0){
        return false;
    } else if(a<0){
        return true;
    } else return aMod<bMod;
}

int main(){
    int n;
    while(true){
        cin >> n >> m;
        if(n==0 && m==0) break;
        int v[n];
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v, v+n, func);
        cout << n << " " << m << endl;
        for(int i=0;i<n;i++) cout << v[i] << endl;
    }
    cout << "0 0" << endl;
    
    return 0;
}