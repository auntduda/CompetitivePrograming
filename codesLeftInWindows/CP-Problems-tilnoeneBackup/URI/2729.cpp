#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        set<string> s;
        string linha, word;
        getline(cin, linha);
        
        stringstream st(linha);
        while(st >> word)
            s.insert(word);
        
        string res = "";
        for(auto e: s)
            res += e + " ";
            
        cout << res.erase(res.size()-1) << endl;
    }
    
    return 0;
}