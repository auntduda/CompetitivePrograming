#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<char, char> let;
    for(int i = 'a'; i <= 'z'; i++){
        cin >> let[char(i)];
    }
    
    char c;
    while(cin >> c){
        cout << let[c];
    }
    cout << endl;
    
    return 0;
}