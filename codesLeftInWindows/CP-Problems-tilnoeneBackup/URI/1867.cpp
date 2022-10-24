#include <iostream>

using namespace std;

int sum(string n){
    int res = 0;
    
    for(int i = 0; i < n.size(); i++)
        res += int(n[i])-48;
    
    string sres = to_string(res);
    if(sres.size() == 1) return res;
    return sum(sres);
}

int main(){
    string n, m;
    
    while(true){
        cin >> n >> m;
        if(n == "0" && m == "0") break;
        
        int sa = sum(n), sb = sum(m);
        
        if(sa == sb) cout << 0 << endl;
        else if(sa > sb) cout << 1 << endl;
        else cout << 2 << endl;
        
    }
    
    return 0;
}