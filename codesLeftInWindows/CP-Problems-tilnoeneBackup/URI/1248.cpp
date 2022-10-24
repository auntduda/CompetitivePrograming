#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    string d, c, a;
    for(int j = 0; j < n; j++){
        getline(cin, d);
        getline(cin, c);
        getline(cin, a);
        
        map<char, bool> foods;
        for(int i = 0; i < d.size(); i++) foods[d[i]] = true;
        
        map<char, bool> eated;
        bool ex = false;
        for(int i = 0; i < c.size(); i++){
            eated[c[i]] = true;
            if(!foods[c[i]]){
                ex = true;
                break;
            }
        }
        
        for(int i = 0; i < a.size(); i++){
            eated[a[i]] = true;
            if(!foods[a[i]]){
                ex = true;
                break;
            }
        }
        
        vector<char> alim;
        for(int i = 0; i < d.size(); i++){
            if(!eated[d[i]]) alim.push_back(d[i]);
        }
        
        sort(alim.begin(), alim.end());
        
        if(ex) cout << "CHEATER" << endl;
        else{
            for(int i = 0; i < alim.size(); i++) cout << alim[i];
            cout << endl;
        }
        
    }
    
    return 0;
}