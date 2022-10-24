#include <bits/stdc++.h>

using namespace std;

void permutar(string str){
    sort(str.begin(), str.end());
 
    do {
       cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        
        permutar(str);
        cout << endl;
    }
    
    return 0;
}