#include <bits/stdc++.h>

using namespace std;

string retiraSetes(string n){
    string ans = "";
    
    for(int i = 0; i < n.size(); i++){
        if(n[i] == '7') ans += '0';
        else ans += n[i];
    }
    
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b;
    char c;
    cin >> a >> c >> b;
    
    a = stoi(retiraSetes(to_string(a)));
    b = stoi(retiraSetes(to_string(b)));
    
    string ans;
    if(c == '+'){
        ans = to_string(a+b);
    } else{
        ans = to_string(a*b);
    }
    
    string temp = retiraSetes(ans);
    
    cout << stoi(temp) << endl;
    
    return 0;
}