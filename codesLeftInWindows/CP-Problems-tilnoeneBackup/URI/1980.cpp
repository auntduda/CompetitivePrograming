#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    long long f[20] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 87178291200, 1307674368000};
    string s;
    
    while(true){
        cin >> s;
        
        map<char, int> let;
        vector<int> rep;
        
        if(s == "0") break;

        for(int i = 0; i < s.size(); i++) let[s[i]]++;
            
        for(int i = 'a'; i <= 'z'; i++)
            if(let[char(i)] > 1) rep.push_back(let[char(i)]);
        
        
        long long den = 0;
        for(int i = 0; i < rep.size(); i++) den += f[let[i]];
        
        if(den == 0) den++;
        
        cout << f[s.size()]/den << endl;
    }
    
    return 0;
}