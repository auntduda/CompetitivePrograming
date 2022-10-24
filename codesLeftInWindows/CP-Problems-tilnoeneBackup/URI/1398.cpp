#include <bits/stdc++.h>
#define ll long long
#define MOD 131071

using namespace std;

int ctoi(char n){
    return (int)n - 48;
}

bool solve(string n){
    ll it = 0;
    
    for(int i = 0; i < n.size(); i++){
        it = it * 2 + ctoi(n[i]);
        it %= MOD;
    }
    
    if(!it) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string num = "";
    char d;
    while(cin >> d){
        if(d == '#'){
            if(solve(num)) cout << "YES" << endl;
            else cout << "NO" << endl;
            num = "";
        } else{
            num += d;
        }
    }
    
    return 0;
}